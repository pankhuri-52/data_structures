#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int arr[n][n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"2darray after transposing"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"2darray after rotation it 90degree"<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
