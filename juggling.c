#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
void arrayrotate(int arr[],int n,int x){
	int d;
	int i,temp,j;
	for(int i=0;i<gcd(n,x);i++){
		j=i;
		temp=arr[i];
		while(1){
			d=j+x;
			if(d>=n)
			 d=d-n;
			if(d==i)
			break;
			arr[j]=arr[d];
			j=d;
		}
		arr[j]=temp;
	}
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc-1;i++){
		arr[k++]=atoi(argv[i]);
	}
	int x=atoi(argv[argc-1]);
	printf("The array elements are:\n");
	for(int i=0;i<k;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	printf("The array is to be rotated %d times",x);
	arrayrotate(arr,k,x);
	printf("Array after rotation\n");
	for(int i=0;i<k;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
