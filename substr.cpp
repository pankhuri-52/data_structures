#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	cout<<"Enter the string"<<endl;
	cin>>str;
	cout<<"The possible substrings of the string are:"<<endl;
	for(int i=1;i<=strlen(str);i++){
		for(int j=0;j<=strlen(str);j++){
			int d=j+i-1;
			for(int k=j;k<=d;k++){
				cout<<str[k];
			}
			cout<<endl;
		}
	}
	return 0;
}
