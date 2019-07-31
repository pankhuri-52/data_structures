#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char str[99];
	cout<<"Enter the string"<<endl;
	cin>>str;
	int count1=0;
	int count;
	int index;
	for(int i=0;i<strlen(str);i++){
		for(int j=i+1;j<strlen(str);j++){
			if(str[i]==str[j])
				count++;
		}
		if(count>count1){
			count1=count;
			index=i;
		}
	}
	cout<<"Maximum occuring charcater in the string is"<<endl;
	for(int i=0;str[i]!='\0';i++){
		if(i==index)
			cout<<str[i];
	}
	return 0;
}
