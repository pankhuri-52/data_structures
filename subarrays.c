#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<=n;j++){
			for(int k=i;k<j;k++){
				printf("%d ",arr[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
