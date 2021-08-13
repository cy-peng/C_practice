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
void TripleHanoi(int n,char from,char aux,char to){
	if(n==3){
		towers(2,from,to,aux);
		printf("ring 3 %c==>%c\n",from,to);
		printf("ring 1 %c==>%c\n",aux,from);
		count+=2;
		return;
	}
	towers(n-1,from,to,aux);
	printf("ring %d:%c==>%c\n",n,from,to);
	towers(n-3,aux,to,from);
	printf("ring %d:%c==>%c\n",n-2,aux,from);
	towers(n-5,to,aux,from);
	printf("ring %d:%c==>%c\n",n-4,to,aux);
	if(n>6)TripleHanoi(n-6,from,aux,to);
	count+=3;}
	
int main(){
	printf("請輸入A柱中的環個數:");
	scanf("%d",&n);
	TripleHanoi(n,'A','B','C');
	printf("共需%d個步驟",count);
	return 0;
}

	
