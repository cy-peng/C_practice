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
  		for (i=len-1;i>0;i--){ //�Ҧ��r���}�l�A�C���֤@�r���A���1�Ӭ��� 
  			
  			for (j=0;j<len-i;j++){	//�q��0�r���}�l�A
				m=0;
				for (k=j;k<j+i;k++){ //�C���� i �Ӧr����r�� 
					s3[m]=s[k];
					m++;
				}
				s3[m]='\0';	//�}�C�����A�᭱������ 
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
