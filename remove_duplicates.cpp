#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	cout<<"Enter the string"<<endl;
	cin>>str;
	for(int i=0;i<strlen(str);i++){
		for(int j=i+1;j<strlen(str);j++){
			if(str[i]==str[j])
				str[j]=-99;
		}
	}
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=-99)
			cout<<str[i];
	}
	return 0;
}
