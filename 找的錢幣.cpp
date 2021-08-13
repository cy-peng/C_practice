#include<stdio.h>
int main()
{ int product,receive,give_[6],money[6]={500,100,50,10,5,1};
	printf("物品價格:");
	scanf("%d",&product);
	printf("收到的錢:");
	scanf("%d",&receive);
	if(product>receive) printf("金額不夠");
	if(product<receive){
		int give=receive-product;
		give_[0]=give/500;
		give_[1]=give%500/100;
		give_[2]=give%100/50;
		give_[3]=give%50/10;
		give_[4]=give%10/5;
		give_[5]=give%5;
	}
	for(int i=0;i<6;i++){
		printf("%3d 元 : %d 個\n",money[i],give_[i]);
	}}
	
