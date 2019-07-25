#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
        	scanf("%d",&arr[i]);
	}
	printf("Enter the number of rotations\n");
	int x;
	scanf("%d",&x);
	printf("Array after rotating:\n");
	for(int i=0;i<x;i++){
		int temp=arr[n-1];
		for(int j=n-1;j>=0;j--){
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("Enter the input sum\n");
	int sum;
	scanf("%d",&sum);
	printf("Pairs which are equal to the input sum\n");
	int sum1;
	for(int i=0;i<n;i++){
		sum1=0;
		for(int j=i+1;j<n;j++){
			sum1=arr[i]+arr[j];
			if(sum==sum1){
				printf("%d %d\n",arr[i],arr[j]);
			}
		}
	}
	return 0;
}
