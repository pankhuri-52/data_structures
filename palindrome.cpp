#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	cout<<"Enter the string"<<endl;
	cin>>str;
	int low=0;
	int high=strlen(str)-1;
	int mid=low+(high-low)/2;
	int flag=0;
	for(int i=0,j=high;i<mid,j>mid;i++,j--){
	     if(str[i]==str[j])
	     {
		     flag=1;
	     }
	     else
	     {
		     flag=0;
		     break;
	     }
	}
	if(flag==0)
		cout<<"Not a palindrome"<<endl;
	if(flag==1)
		cout<<"Palindrome"<<endl;
	return 0;
}
