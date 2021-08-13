#include<stdio.h>
#include<string.h>
void check_ISBN10(char arr[]);
void check_ISBN13(char arr[]);
char input[14];
main(){
	printf("Please input an ISBN code::");
	scanf("%s",input);
	if(strlen(input)==10)
		check_ISBN10(input);
	else if(strlen(input)==13)
		check_ISBN13(input);
	else printf("The ISBN code is wrong!");
	}
void check_ISBN10(char arr[]){
	int i,sum=0,a=10; 
	for(i=0;i<10;i++){
	input[i]=(int)input[i]-'0';
	while(a!=0){
	sum+=input[i]*a;
	a--;
	printf("%d",sum);
	}}}

void check_ISBN13(char arr[]){
	int i,sum=0;
	for(i=0;i<12;i++){
		input[i]=(int)input[i]-'0';
		if(i%2!=0)  					
		input[i]=3*input[i];
		printf("%d ",input[i]);
		sum+=input[i];
		printf("%d",sum);
		}
	if(((10-sum%10))%10==input[12]) printf("The ISBN code is correct!\n");
    else printf("The ISBN code is wrong!\n");	
		}
	


