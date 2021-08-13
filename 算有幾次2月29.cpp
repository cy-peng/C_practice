#include <stdio.h>
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int isLeap(long year){
	if(( year%4==0 && year%100!=0)||(year %400==0))
	{
		return 1;
	}
	return 0;
}

int isDay(int month,int day){
	if (day<1 || day > days[month-1]) return 0;
	else return 1;
}

int dateExist(long year,int month,int day){
	if (year<0 || year>2147483647){
		printf("\n西元年要 1 到 2147483647間\n");
		return 0;
	} else if (month<1 || month>12){
		printf("\n月要 1 到 12間\n");
		return 0;
	} else if (!isDay(month,day)){
		printf("\n%d 月沒有 %d 日\n",month,day);
		return 0;
	} else return 1;
}

int main(){
	long year,year1,year2;
	int month1,month2,day1,day2;
	int isleap,numbers=0;
	do {
		printf("請輸入西元開始日期（yyyy/mm/dd)為...");
		scanf("%ld/%d/%d",&year1,&month1,&day1);
	}while (!dateExist(year1,month1,day1));
	do {
		printf("請輸入西元結束日期（yyyy/mm/dd)為...");
		scanf("%ld/%d/%d",&year2,&month2,&day2);
	}while (!dateExist(year2,month2,day2));
	year=year1+1;
	while (year<year2){		//去頭尾年份的閏年數 
		if (isLeap(year)) {
		numbers++;
		//printf("%ld %d\n",year,numbers);
		}
		year++;
	}
	if (isLeap(year1) && (month1<3)) numbers++;//起始閏年且月是1或2 
	if (isLeap(year2)){//結束年是閏年且在2月29日後 
		if (month2>2) numbers++;
		else if (month2==2 && day2==29) numbers++;
	}
	printf("此期間的2月29日共有 %d 次",numbers);
}


