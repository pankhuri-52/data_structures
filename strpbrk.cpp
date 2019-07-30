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
	int a,flag;
	for(int i=0;i<strlen(str1);i++){
		flag=0;
		for(int j=0;j<strlen(str2);j++){
			if(str1[i]==str2[j])
			{
				a=j;
				flag=0;
				break;
			}
			else
			{
				flag=1;
				continue;
			}
		}
	}
	if(flag==1)
		cout<<"No character found"<<endl;
	else
		cout<<"Character found at "<<a<<" index"<<endl;
	return 0;

}
