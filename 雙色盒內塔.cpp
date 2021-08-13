#include<stdio.h>
int n,count;
char from,aux,to;
void towers(int n,char from,char aux,char to){
	if(n==1) {
	printf("ring 1 %c==>%c\n",from,to);count++;}
	else {
		towers(n-1,from,to,aux);
		printf("ring %d %c==>%c\n",n,from,to);count++;
		towers(n-1,aux,from,to);	
	}}
void DoubleHanoi(int n,char from,char aux,char to)
{
	if(n==2)
	{
		printf("ring 1:%c=>%c\n",from,aux);
		printf("ring 2:%c=>%c\n",from,to);
		count=count+2;
		return;
	}
	if(n==4)
	{
		printf("ring 4:%c=>%c\n",from,to);
		printf("ring 3:%c=>%c\n",aux,from);
		printf("ring 2:%c=>%c\n",aux,to);
		printf("ring 1:%c=>%c\n",from,aux);
		count=count+4;
		return;
	}
	towers(n-1,from,to,aux);
	printf("ring%d:%c=>%c\n",n,from,to);
	towers(n-3,to,aux,from);
	printf("ring%d:%c=>%c\n",n-2,aux,to);
	towers(n-5,to,aux,from);
	printf("ring%d:%c=>%c\n",n-3,from,aux);
	if(n>6)towers(n-6,to,aux,from);
	printf("ring%d:%c=>%c\n",n-5,to,aux);
	if(n>6)DoubleHanoi(n-6,from,aux,to);
	count=count+4;
}
int main(){
	printf("請輸入A柱中的環個數:");
	scanf("%d",&n);
	DoubleHanoi(n,'A','B','C');
	printf("共需%d個步驟",count);
	return 0;
}

	
