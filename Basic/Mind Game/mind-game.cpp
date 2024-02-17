//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int mindGame(int K) {
        int n;
        for(int i=0;i<10;i++){  
        n = (rand() % 10) + 1; 
        
        }
        int f = n;
        
         n = n*2;
         n = n+K;
         n = n/2;
         n = n-f;
        return n;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int K;
        
        cin>>K;

        Solution ob;
        cout << ob.mindGame(K) << endl;
    }
    return 0;
}
// } Driver Code Ends