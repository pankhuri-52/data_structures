#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	char temp[99];
	char temp1[99];
	int k=0;
	int x=0;
	cout<<"Enter the string"<<endl;
	cin>>str;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>=65 && str[i]<=90){
			temp[k++]=str[i];
		}
		else
		 {
			 temp1[x++]=str[i];
		 }
	}
	strcat(temp1,temp);
	cout<<temp1;
	return 0;
}
