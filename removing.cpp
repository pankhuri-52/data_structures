#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str1[99];
	cout<<"Enter the first string"<<endl;
	cin>>str1;
	char str2[99];
	cout<<"Enter the second string"<<endl;
	cin>>str2;
	int index;
	for(int i=0;i<strlen(str1);i++){
		for(int j=0;j<strlen(str2);j++){
			if(str1[i]==str2[j]){
				str1[i]=-99;
			}
		}
	}
	for(int i=0;i<strlen(str1);i++){
		if(str1[i]!=-99)
			cout<<str1[i];
	}
	return 0;
}
