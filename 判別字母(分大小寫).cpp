#include<stdio.h>
int main()
{ char word[30];
	printf("�п�J�@�ӳ�r:(�p�g)");
	scanf("%s",word);
	int i,al[26];
	for(i=0;i<26;i++)
	al[i]=0;
	i=0;
	while (word[i]!=0){
	al[word[i]-97]++;
	i++;
	}for(i=0;i<26;i++)
	if(al[i]!=0) printf("%c:%d��\n",i+97,al[i]);
	}
