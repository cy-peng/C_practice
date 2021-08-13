#include<stdio.h>
int main(){
	FILE *fp,*fpt;
	int n1;
	float n2;
	fp=fopen("abc.txt","r");
		fscanf(fp,"%d,%f",&n1,&n2);
		printf("%d %f",n1,n2);
	fpt=fopen("abc.txt","w");
		fseek("fp,20,SEEK_SET");
		fprintf("%d %f",n1,n2);
	fclose(fp);
}
