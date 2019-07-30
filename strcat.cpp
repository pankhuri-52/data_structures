#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str1[99];
	char str2[99];
	cout<<"Enter the first string"<<endl;
	cin>>str1;
	cout<<"Enter the second string"<<endl;
	cin>>str2;
	char temp[99];
	int k=0;
	for(int i=0;i<strlen(str1);i++){
		temp[k++]=str1[i];
	}
	temp[k++]=' ';
	for(int i=0;i<strlen(str2);i++){
		temp[k++]=str2[i];
	}
	cout<<temp;
	return 0;
}
