#include <iostream>
using namespace std;
int bubblesort(int arr[99],int k,int i){
	if(i==k)
		return -1;
	else{
		for(int j=i+1;j<k;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		bubblesort(arr,k,i+1);
	}
}
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	bubblesort(arr,k,0);
	cout<<"After implementing bubble sort recursively"<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
