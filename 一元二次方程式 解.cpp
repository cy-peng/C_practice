#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c,D;
double x,x1,x2;
printf("�w���@���G����{��ax^2+bx+c=0,�п�Ja,b,c����:");
scanf("%d %d %d",&a,&b,&c); 
D=(b*b)-(4*a*c);
if(D>0) {
x1=((sqrt(D))-b)/a; x2=(b+sqrt(D))/a; printf("x���Ѭ�%f,%f",x1,x2);}
if(D==0) {
x=(-b)/2*a; printf("x���Ѭ�%f",x);}
if(D<0) printf("�S�����");
}
