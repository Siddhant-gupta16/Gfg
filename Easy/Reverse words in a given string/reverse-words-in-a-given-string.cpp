//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
     int n = S.length();
    string word;
    string ans;
    int i = 0;

    for (int j = n - 1; j >= 0; j--) {
        if (S[j] != '.') {
            word += S[j];
        } else {
            reverse(word.begin(), word.end());
            ans += word + '.';
            word.clear();
        }
    }

    
    reverse(word.begin(), word.end());
    ans += word;

    return ans;
       
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends