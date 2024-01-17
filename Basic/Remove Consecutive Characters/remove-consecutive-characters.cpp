//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
    //     int i=0;
        int n = S.length();
        
    //   while(i<=n-2){
    //       if(S[i]==S[i+1]){
    //           S.erase(i,1);
               
    //       }
    //       i++;
    //   }
    
    //   map<char,int>mp;
      
    //   for(int i=0;i<n;i++){
    //       mp[S[i]]++;
    //   }
      
    //   std::string resultString;

    
    // for (int i = 0; i < n; i++) {
    //     char currentChar = S[i];
        
     
    //     if (mp[currentChar] == 1) {
    //         resultString += currentChar;

            
    //         mp[currentChar]--;}
      
    // }
     string ans;
       
    if (n > 0) {
        

        
        ans += S[0];

        
        for (int i = 1; i < n; i++) {
            if (S[i] != S[i - 1]) {
                ans+= S[i];
            }
        }


    }
       
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
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




// } Driver Code Ends