//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
    
    for (int i = 0; i < s.length(); i++) {
        if (s[0] >= 'A' && s[0] <= 'Z') {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = s[i] + 'A' - 'a';
            }
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }
    }
    return s;
}

      
      
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends