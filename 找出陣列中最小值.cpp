#include <stdio.h>
	int min(int arr[12]){
		int min=0;
		min=arr[0];
		for(int i=1;i<12;i++){
			if(arr[i]<min) min=arr[i];
	}return min;
	}
	main(){
	int arr[12]={2,3,4,5,15,63,73,60,10,47,2,33};
	printf("%d",min(arr));
}
