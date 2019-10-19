#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
void reverse_stack(string str){
    int n = str.length();
    char char_array[n + 1];
    strcpy(char_array, str.c_str());
    cout<<"String entered"<<endl;
    for (int i = 0; i < n; i++)
        cout << char_array[i];
    stack <char> stk;
    for(int i=0;i<n;i++){
	    stk.push(char_array[i]);
    }
    cout<<"After reversing"<<endl;
    while(stk.empty()==false){
	    cout<<stk.top();
	    stk.pop();
    }
}
int main(int argc,const char *argv[]){
	string str=argv[1];
	reverse_stack(str);
	return 0;
}
