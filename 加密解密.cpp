#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define ENTER 13
main(){
  	FILE *fptr,*tptr;
  	char ch,input[20],inArr[20],enArr[20],deArr[20];
  	int i=0,j=0,k=0;
  	fptr=fopen("input.txt","r");
  
  	while ((ch=fgetc(fptr))!=EOF){//Ū�� input.txt ��ch�A�ȩ̀Ǧs�� inArr[0]�� inArr[i-1] 
   		inArr[i]=ch;
   		i++; //�̫᪺ i ��n�O input.txt ���r���� 
  	}
  
  	fclose(fptr);
  	printf("�п�J�@�Ӧr��,��J������Enter:\n");
 	scanf("%s",&input);
 	printf("\n");
 
 	int len=strlen(input); //arr ������
 
  	for (j=len;j<i;j++) input[j]=input[j%len]; //����u����J�� len �Ӧr(arr[0] �� arr[len-1]) 
            //�ҥH�� arr[len]�� arr[i-1]�ɺ� 
            
 	for (j=0;j<i;j++) {
  		enArr[j]=inArr[j]+input[j];
  		printf("%c",enArr[j]);
 	}
 	printf("\n");
 	fptr=fopen("output.txt","w");
 	for (j=0;j<i;j++) {
  		deArr[j]=enArr[j]-input[j];
  		fprintf(fptr,"%c",deArr[j]);
 	}
 	fclose(fptr);
}
