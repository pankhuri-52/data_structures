#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the size of square matrix\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Matrix after transposing\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	printf("Matrix after rotating 90 degree\n");
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
