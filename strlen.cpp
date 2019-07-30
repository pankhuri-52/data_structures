#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	cout<<"Enter the string"<<endl;
	cin>>str;
	cout<<"The length of string is:"<<endl;
	int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	cout<<count;
	return 0;
}
