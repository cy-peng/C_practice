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
  
  	while ((ch=fgetc(fptr))!=EOF){//讀取 input.txt 到ch，並依序存到 inArr[0]到 inArr[i-1] 
   		inArr[i]=ch;
   		i++; //最後的 i 剛好是 input.txt 的字元數 
  	}
  
  	fclose(fptr);
  	printf("請輸入一個字串,輸入完畢按Enter:\n");
 	scanf("%s",&input);
 	printf("\n");
 
 	int len=strlen(input); //arr 的長度
 
  	for (j=len;j<i;j++) input[j]=input[j%len]; //原先只有輸入的 len 個字(arr[0] 到 arr[len-1]) 
            //所以把 arr[len]到 arr[i-1]補滿 
            
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
