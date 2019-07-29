#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int findlcm(int arr[],int n){
	int result=arr[0];
	for(int i=1;i<n;i++){
		result=(((arr[i]*result))/(gcd(arr[i],result)));
	}
	return result;
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	printf("%d",findlcm(arr,k));
	return 0;
}
