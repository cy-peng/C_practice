#include<stdio.h>
int n,count;
char from,aux,to;
void towers(int n,char A,char B,char C){
	if(n==1) {
	printf("ring 1 %c==>%c\n",A,C);count++;}
	else {
		towers(n-1,A,C,B);
		printf("ring %d %c==>%c\n",n,A,C);count++;
		towers(n-1,B,A,C);	
	}}
int main(){
	printf("�п�JA�W�������Ӽ�:");
	scanf("%d",&n);
	towers(n,'A','B','C');
	printf("�@��%d�ӨB�J",count);
}

	
