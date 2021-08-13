#include<stdio.h>
int main()
{
	int demical[20],binary[20],i=1,j=0;
	printf("Please input a demical number:");
	scanf("%d",demical);
	while(1){
		binary[0]=1;
		binary[j]=demical[i]%2;
		printf("%d",demical);
		i++;j++;
		if(demical[i]==0) break;
	}
	printf("Please input a binary number:");
	scanf("%s",binary);
}
	
