#include <stdio.h>

int main(void) {
	int x=55;
	printf("x: %d\n",x++);//�L55��x��56 
	{	//�]���j���A�ҥH�@�ΰ�u�b�����ܼƩM�~���L�� 
		int x=65;
		printf("x: %d\n",x++);//�L65��x��66
	}							 
	printf("x: %d\n",x++);//�L�X56����57 
	while (x++<60){//x=57<60�A��58�i�j���Ax=58�A�i�A59�]�i 
		int x=59;//x=59
		x++;//x=60
		printf("\t2 %d\n",x);
		printf("1 x: %d\n",x++);//�L�X60 (�~��x57,58,59�@3������60) 
		printf("\t3 %d\n",x);
	}
	printf("\t4 %d\n",x);//while�̪�60�a�X�� 
	printf("x: %d\n",x++);//�L�X61 
	
	return 0;
}
