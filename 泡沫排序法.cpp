#include <stdio.h>
void sort(int*arr,int n){
	int i,j,temp=0;
for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(arr[j]<arr[i]){
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}}}}
int main(){
	int n,i=0,input[30];
	printf("請輸入整數的個數:");
	scanf("%d",&n);
	do{
		printf("請輸入第%d個數:",i+1);
		scanf("%d",&input[i]);
		i++;
	}while(i<n);
	sort(input,n);
	printf("%d ",input);
}
