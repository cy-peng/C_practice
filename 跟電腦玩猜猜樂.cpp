#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main(){
int sum=0,a,N,n,enter=0,b;
srand(unsigned(time(NULL)));
a=(rand()%31)+10;
printf("N=%d\n",a);
while(1){
b=a;
b=b-sum;
if(b%4==1)n=1;
if(b%4==2)n=1;
if(b%4==3)n=2;
if(b%4==0)n=3;
printf("sum=%d,Computer add %d\n",sum,n);
sum=sum+n;
if(sum>=a){
printf("sum=%d,Computer lose!!",b);
break;
}
printf("sum=%d,You add:",sum);
scanf("%d",&enter);
sum=sum+enter;
if(sum>=a){
printf("sum=%d,You lose!!",a);
break;
}
}}



	


