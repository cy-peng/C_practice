#include <stdio.h>
main(){
 int num;
 do{
 printf("輸入一個數字或字母");
 scanf("%s",&num);
 if(num>48&&num<57) printf("此為數字\n");
 if(num>=65&&num<=90||num<=122&&num>=97) printf("此為字母\n");
}while(1);}
