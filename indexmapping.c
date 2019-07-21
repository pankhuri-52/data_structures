#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	scanf("%d",&x);
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	int b[max];
	for(int i=0;i<max;i++){
             b[arr[i]]=1;
	}
	/*for(int i=0;i<max;i++){
		printf("%d\n",b[i]);
	}*/
	int flag=0;
	for(int i=0;i<max;i++){
		if(b[x]==1){
			flag=1;
		}
		else
			flag=0;
	}
	if(flag==1){
		printf("Element is present");
	}
		else
			printf("Element is not present");
	return 0;
}
