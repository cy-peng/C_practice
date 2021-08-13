#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c,D;
double x,x1,x2;
printf("已知一元二次方程式ax^2+bx+c=0,請輸入a,b,c的值:");
scanf("%d %d %d",&a,&b,&c); 
D=(b*b)-(4*a*c);
if(D>0) {
x1=((sqrt(D))-b)/a; x2=(b+sqrt(D))/a; printf("x的解為%f,%f",x1,x2);}
if(D==0) {
x=(-b)/2*a; printf("x的解為%f",x);}
if(D<0) printf("沒有實根");
}
