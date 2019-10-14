#include <bits/stdc++.h>
using namespace std;

int countChars(string, string);

int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    string s1, s2;
	    cin >> s1 >> s2;
	    
	    cout << countChars(s1, s2) << endl;
	}
	
	return 0;
}
}


int countChars(string s1, string s2){
    
    int count1[26]={0};
    int count2[26]={0};
    
    for(int i=0;s1[i]!='\0';i++)
       count1[s1[i]-'a']++;
    for(int i=0;s2[i]!='\0';i++)
       count2[s2[i]-'a']++;
       
     int result=0;
     for(int i=0;i<26;i++)
     result=result+abs(count1[i]-count2[i]);
     
     return result;
    
}
