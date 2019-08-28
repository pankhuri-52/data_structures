#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
	int arr[argc];
	int k=0;
	for(int i=1;i<argc;i++){
		arr[k++]=atoi(argv[i]);
	}
	int unique[99];
        int x=0;
        int i,j;
        for(i=0;i<k;i++){
           for(j=0;j<i;j++){
                   if(arr[i]==arr[j])
                           break;
           }
           if(i==j)
            unique[x++]=arr[i];
        }
	cout<<"Distinct elements in the array"<<endl;
        for(int i=0;i<x;i++){
                cout<<unique[i]<<" ";
	}
	cout<<endl;
        int freq[99];
	int y=0;
	int count;
	for(int i=0;i<x;i++){
		count=0;
		for(int j=0;j<k;j++){
			if(unique[i]==arr[j])
				count++;
		}
		freq[y++]=count;
	}
        cout<<"Frequency of each element"<<endl;
	for(int i=0;i<y;i++){
		cout<<freq[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<y;i++){
		for(int j=i+1;j<y;j++){
			if(freq[i]>freq[j]){
				int temp=freq[i];
				freq[i]=freq[j];
				freq[j]=temp;
				int temp1=unique[i];
				unique[i]=unique[j];
				unique[j]=temp1;
			}
		}
	}
	cout<<"After swapping both arrays become"<<endl;
	for(int i=0;i<y;i++){
		cout<<freq[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<x;i++){
		cout<<unique[i]<<" ";
	}
	cout<<endl;
	cout<<"After Sorting according to frequency"<<endl;
	for(int i=0;i<k;i++){
		for(int j=0;j<freq[i];j++){
			cout<<unique[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
