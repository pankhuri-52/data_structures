#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int min=arr[0];
	int low=0;
	int high=k-1;
	int mid=low+(high-low)/2;
	for(int i=0;i<mid;i++){
		if(min>arr[i])
			min=arr[i];
	}
	int min1=arr[mid];
	for(int i=mid;i<k;i++){
              if(min1>arr[i])
		      min1=arr[i];
	}
	if(min<min1)
		printf("%d",min);
	else
		printf("%d",min1);
	return 0;
}

