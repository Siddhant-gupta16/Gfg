//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
   if(!((str[0]>='0'&&str[0]<='9')||str[0]=='-'))
    {
        return -1;
        
    }
    for(int i=1;i<str.length();i++){
        
        
        if((str[i]>='0'&&str[i]<='9')){
            continue;
        }
        else{
            return -1;
        }
        
    }
    
  
        int ans = stoi(str);
        return ans;
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