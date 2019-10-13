include <bits/stdc++.h>
using namespace std;
void checkString(string s);

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    checkString(s);
	   
	}
	return 0;
}

}

void checkString(string s)
{
    int v=0;
    int c=0;
    
      for(int i=0;i<s.length();i++){
          if(s[i]!=' '){
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
             v++;
          else 
             c++;
          }
      }
    
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}
