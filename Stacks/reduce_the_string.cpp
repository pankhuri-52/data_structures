#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void remove_duplicates(string str){
	stack <char> stk;
	int n=str.length();
	char char_array[n+1];
	int count=0;
	strcpy(char_array,str.c_str());
	for(int i=0;i<n;i++){
		if(char_array[i]!=char_array[i+1]){
			stk.push(char_array[i]);
			 if(count>=4){
                        while(count!=0){
                                stk.pop();
				count--;
                        }
                }
           }
		if(char_array[i]==char_array[i+1]){
			count++;
			stk.push(char_array[i]);
		}
	}
	while(stk.empty()==false){
		cout<<stk.top();
		stk.pop();
	}
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	remove_duplicates(str);
	return 0;
}
