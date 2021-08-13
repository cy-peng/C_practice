#include <stdio.h>
main(){
int a=0,e=0,i=0,o=0,u=0,k;
char word[30];
printf("輸入一個字串");
scanf("%s",word);
for(k=0;k<=30;k++){
	if(word[k]=='a')a++;
	if(word[k]=='e')e++;
	if(word[k]=='i')i++;
	if(word[k]=='o')o++;
	if(word[k]=='u')u++;
}
printf("a出現%d次\ne出現%d次\ni出現%d次\no出現%d次\nu出現%d次\n",a,e,i,o,u);}
