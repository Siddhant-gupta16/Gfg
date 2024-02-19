//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
    //   int n = patt.length();
    //   int ans =-1;
       
    //   for(int i=0;i<n;i++){
    //       string s ="";
    //       s= patt[i];
           
    //       if(s.find(str)!=std::string::npos){
    //           int a = s.find(str);
    //           cout<<a<<endl;
    //           if(a>ans){
    //               ans =a;
    //           }
    //       }
           
    //       cout<<s<<endl;
           
    //   }
       
    //   return ans;
    unordered_set<char> pattSet(patt.begin(), patt.end()); 

    for (int i = 0; i < str.length(); ++i) {
        if (pattSet.find(str[i]) != pattSet.end()) {
            return i; 
        }
    }
    
    return -1; 
}
    
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends