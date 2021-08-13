#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int is_palindrome(char *s) {
  int i, len;
  len = strlen(s);
  
  	for(i = 0; i < (len /2); i++) 
	  	if (s[i] != s[len-i-1])	return 0;
	return 1;
}
int main() {
  	char s[256],*ss,s3[256];
  	int len,i,j,k,m=0,max,num;
	printf("Please enter a string");
	scanf("%s",s);
  		len=strlen(s)-1;
  		max=0;
  		num=1;
  		for (i=len-1;i>0;i--){ //所有字元開始，每次少一字元，到取1個為止 
  			
  			for (j=0;j<len-i;j++){	//從第0字元開始，
				m=0;
				for (k=j;k<j+i;k++){ //每次取 i 個字元當字串 
					s3[m]=s[k];
					m++;
				}
				s3[m]='\0';	//陣列結尾，後面的不管 
				if (is_palindrome(s3)) {
					if (i==max) num++;
					if (i>max) max=i;
					printf("max:%d num:%d  ",max,num);	
					printf("%s is palindrome\n", s3);
				}
//				else printf("%s is not palindrome\n", s3);
		  	}
		  	
		}
  		printf("%d %d\n",max,num);
    //printf("%s",s3);
   }	
