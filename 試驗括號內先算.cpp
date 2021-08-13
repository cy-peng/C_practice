#include <stdio.h>

int main(void) {
	int x=55;
	printf("x: %d\n",x++);//印55完x變56 
	{	//因有大刮號，所以作用域只在內部變數和外部無關 
		int x=65;
		printf("x: %d\n",x++);//印65完x變66
	}							 
	printf("x: %d\n",x++);//印出56後變57 
	while (x++<60){//x=57<60再變58進大刮號，x=58再進，59也進 
		int x=59;//x=59
		x++;//x=60
		printf("\t2 %d\n",x);
		printf("1 x: %d\n",x++);//印出60 (外部x57,58,59共3次後變60) 
		printf("\t3 %d\n",x);
	}
	printf("\t4 %d\n",x);//while裡的60帶出來 
	printf("x: %d\n",x++);//印出61 
	
	return 0;
}
