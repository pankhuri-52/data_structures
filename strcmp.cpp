#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str1[99];
	cout<<"Enter the first String"<<endl;
	cin>>str1;
	char str2[99];
	cout<<"Enter the second String"<<endl;
	cin>>str2;
	if(strlen(str1)!=strlen(str2))
		cout<<"The two strings are not equal"<<endl;
	else
	{
		int flag=0;
		for(int i=0,j=0;i<strlen(str1),j<strlen(str2);i++,j++){
			if((int)str1[i]==(int)str2[j])
				continue;
			else if(((int)str1[i]-(int)str2[j])>0)
			{
				flag=1;
				break;
			}
			else if(((int)str1[i]-(int)str2[j])<0)
			{
				flag=2;
				break;
			}
		}
			if(flag==1)
				cout<<"-1";
			if(flag==2)
				cout<<"1";
	}
	return 0;

}
