//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    string ans ="";
    
    int n = s.length();
    
    for(int i =n; i>=0;i--){
        
        string a = "";
        a =s[i];
        
        if(ans.find(a)==std::string::npos&& a!=" "){
            ans+=(s[i]);
            
        }
    }
    
    
    return ans;
    
}