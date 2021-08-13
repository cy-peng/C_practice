#include <stdio.h>
main(){char b[5]={'A','B','C','D','E'};
int i,j,max_pro,max_pe,sum_pe[3],sum_pro[5],a[3][5]={{33,32,56,45,33},{77,33,68,45,23},{43,55,43,67,65}};
printf("  銷售員  產品A  產品B  產品C  產品D  產品E\n");
	for(i=0;i<3;i++){
		printf("%7d",i+1);
		for(j=0;j<5;j++){	
			printf("%7d",a[i][j]);			
		if((j+1)%5==0) printf("\n");
	}}
	max_pe=0;
	for(i=0;i<3;i++){
		sum_pe[i]=0;
		for(j=0;j<5;j++){
		sum_pe[i]+=a[i][j];			
		}printf("銷售員%d的銷售總金額:%d\n",i+1,sum_pe[i]);
		if(sum_pe[i]>sum_pe[max_pe]) max_pe=i;
		}
	max_pro=0;
	for(j=0;j<5;j++){
		sum_pro[j]=0;
		for(i=0;i<3;i++){				
		sum_pro[j]+=a[i][j];
	} 
		printf("產品%c的銷售總金額:%d\n",b[j],sum_pro[j]);
		if(sum_pro[j]>sum_pro[max_pro]) max_pro=j;}
	printf("最好業績的銷售員:%d\n",max_pe+1);
	printf("銷售最好的產品:%c",b[max_pro]);}
