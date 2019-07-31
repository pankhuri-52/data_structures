#include <iostream>
#include <string.h>
#include <set>
using namespace std;
void print_lex_circ(string str,int l,int m){
       set<string> lex_circ_strings;
       str=str+str;
       for(int i=0;i<l;i++)
	       lex_circ_strings.insert(str.substr(i,m));
       while(!lex_circ_strings.empty()){
	       cout<<*lex_circ_strings.begin()<<" ";
	       lex_circ_strings.erase(lex_circ_strings.begin());
       }
}
int main(){
        string str;
        cout<<"Enter the string"<<endl;
        cin>>str;
        int n=str.length();
        int x;
        cout<<"Enter the length of lexographical string\n";
        cin>>x;
        print_lex_circ(str,n,x);
        return 0;
}

