#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
	int x=atoi(argv[argc-1]);
	for(int i=0;i<k;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("%d",x);
	int max=arr[0];
	for(int i=0;i<k;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	int b[max][2];
	for(int i=0;i<max;i++){
		if(arr[i]<0){
			b[arr[i]][1]=1;
		}
		else if(arr[i]>=0){
                     b[arr[i]][0]=1;
		}
	}
	int flag=1;
	for(int i=0;i<max;i++){
		if(b[x][0]==1 || b[x][1]==1){
			flag=1;
		}
		else
			flag=0;
	}
	printf("\n");
	if(flag==1)
		printf("Element is present");
	else
		printf("Element is not present");
	return 0;
}
