{
//Initial Template for C++
#include <iostream>
using namespace std;
int arr[1000][1000];
void interchange(int ,int );
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    for(int i=0;i<r;i++)
	    for(int j=0;j<c;j++)
	    cin>>arr[i][j];
	    
	    
	    interchange( r, c);
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
//Back-end complete function Template for C++
//Complete this function
//The array arr is globally declared
void interchange(int r,int c)
{
    int temp[1000][1000];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==0 || j==(c-1)){
                temp[i][j]=arr[i][j];
                arr[i][j]=arr[i][c-1];
                arr[i][c-1]=temp[i][j];
            }
        }
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
