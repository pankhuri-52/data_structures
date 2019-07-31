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
	strcpy(temp,str1);
	strcat(temp,str1);
	if(strlen(str1)!=strlen(str2))
		cout<<"The length of both strings are not equal"<<endl;
	else
	{
		char *p=strstr(temp,str2);
		if(p)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
