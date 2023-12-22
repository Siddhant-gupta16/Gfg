//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
       int RedOrGreen(int N,string S) {
        int r=0;
        int g=0;
    
       for(int i=0;i<S.length();i++){
            if(S[i]=='R'){
                r++;
            }
            else{
                g++;
            }
        }
        
        int ans =0;
        
        if(r>=g){
            for(int i=0;i<N;i++){
                if(S[i]=='G'){
                    ans++;
                }
            }}
            
        else{  
            
            for(int i=0;i<N;i++){
                if(S[i]=='R'){
                    ans++;
                }
            }
        }





  
        
        
        
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends