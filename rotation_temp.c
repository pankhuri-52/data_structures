#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
        int count=argc-2;
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
	int x=atoi(argv[argc-1]);
	for(int i=0;i<k;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("%d",x);
	int temp[x];
	int m=0;
	for(int i=x;i<=count-1;i++)
	{
		temp[m++]=arr[i];
	}
	printf("\n");
	for(int i=0;i<m;i++){
		printf("%d",temp[i]);
	}
	printf("\n");
	for(int i=0;i<x;i++){
	   arr[count-x+i]=temp[i];
	}
	for(int i=0;i<argc-2;i++){
		printf("%d",arr[i]);
	}
	return 0;

}
