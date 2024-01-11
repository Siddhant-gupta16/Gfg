//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
  bool ispalindrome(string&S, int start , int end){
        
        while(start<end){
            if(S[start]!=S[end]){
              return false;
            }
            
            start++; end--;
        }
        return true;
    }
 
 
 
   string longestPalindrome(string S){
         string ans ="";
        
        for(int i=0;i<S.size();i++){
            for(int j=i;j<S.size();j++){
                
                if(ispalindrome(S,i,j)){
                    string t = S.substr(i,j-i+1);
                    
                    ans = t.size()>ans.size()?t :ans;}}}
                    
                    return ans;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends