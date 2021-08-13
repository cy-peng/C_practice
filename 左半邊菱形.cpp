#include<iostream>
main(){
	int i,j,k;
for(i=1;i<=5;i++)
	{
		for(k=5-i;k>0;k--)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=i;j<=5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
