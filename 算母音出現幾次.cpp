#include <stdio.h>
main(){
int a=0,e=0,i=0,o=0,u=0,k;
char word[30];
printf("��J�@�Ӧr��");
scanf("%s",word);
for(k=0;k<=30;k++){
	if(word[k]=='a')a++;
	if(word[k]=='e')e++;
	if(word[k]=='i')i++;
	if(word[k]=='o')o++;
	if(word[k]=='u')u++;
}
printf("a�X�{%d��\ne�X�{%d��\ni�X�{%d��\no�X�{%d��\nu�X�{%d��\n",a,e,i,o,u);}
