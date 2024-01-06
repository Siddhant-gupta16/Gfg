//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int hash[256]={0};
        
        
        for(int i=0;i<a.length();i++){
            hash[a[i]]++;
        }
        
        for(int i=0;i<b.length();i++){
            hash[b[i]]--;
        }
        
        for(int i=0;i<256;i++){
            if(hash[i]!=0){
                return false;
            }
        }
        return true;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends