#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main(){
	char str[99]="Abby ping pong";
	cout<<str;
	cout<<endl;
	char str1[99];
        cout<<"Enter the string which you want to add"<<endl;
        cin>>str1;
	int t=strlen(str1);
	int index;
	cout<<"Enter the index at which you want to add the string"<<endl;
	cin>>index;
	char temp[99];
	int k=0;
	for(int i=0;i<strlen(str);i++){
		temp[k++]=str[i];
		if(i==index){
			strcat(temp,str1);
			k=k+t+1;
			temp[k++]=' ';
			continue;
		}
		else 
			continue;
	}
	cout<<temp;
	return 0;
}
