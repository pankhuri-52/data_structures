#include <iostream>
#include <string.h>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Enter the first string"<<endl;
	cin>>str1;
	cout<<"Enter the second string"<<endl;
	cin>>str2;
	string temp;
	temp=str1;
	str1=str2;
	str2=temp;
	cout<<"After swapping"<<endl;
	cout<<"String1 becomes "<<str1<<endl;
	cout<<"String2 becomes "<<str2<<endl;
	return 0;
}
