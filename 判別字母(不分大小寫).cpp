#include <stdio.h>
main(){
	int i;
	char word[30];	
	printf("�п�J�@�ӳ�r:");
	scanf("%s",word);
	int al[26];
	for(i=0;i<26;i++){
	al[i]=0;
	if(word[i]<97) word[i]+=32;
	}
	i=0;
	while (word[i]!=0){
	al[word[i]-97]++;
	i++;
	}for(i=0;i<26;i++)
	if(al[i]!=0) printf("%c:%d��\n",i+97,al[i]);
	}
