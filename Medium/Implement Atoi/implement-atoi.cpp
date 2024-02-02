//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int num=0,i=0;
        int sign=1;
        
        while(s[i]==' '){
            i++;
        }
        if(i<s.size() && (s[i]=='-' || s[i]=='+')){
            sign=s[i]=='+'?1:-1;
            i++;
        }
        while(i<s.size()){
          if(isdigit(s[i])){
              num=num*10+(s[i]-'0');
              i++;
          } 
          else{
            
          return -1;
        }
        }
        
        return num*sign;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends