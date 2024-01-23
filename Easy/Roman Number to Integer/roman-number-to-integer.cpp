//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int result=0;
        unordered_map<char,int>mp={
          {'I',1},
          {'V', 5},
          {'X', 10},
          {'L', 50},
          {'C', 100},
          {'D', 500},
          {'M', 1000}
        };
        for(int i=0;i<str.length();i++){
            int current=mp[str[i]];
            int next=(i+1<str.size())?mp[str[i+1]]:0;
            if(current>=next){
                result+=current;
            }else{
                result-=current;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends