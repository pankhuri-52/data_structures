#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
        if(a==0)
                return b;
        else
                return gcd(b%a,a);
}
int findgcd(int arr[],int n){
        int result=arr[0];
        for(int i=1;i<n;i++){
                result=gcd(arr[i],result);
        }
        return result;
}

int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
            arr[k++]=atoi(argv[i]);
	}
	printf("The gcd of following numbers is:\n");
	printf("%d",findgcd(arr,k));
	return 0;
}

