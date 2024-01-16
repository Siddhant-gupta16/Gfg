//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Returns count buildings that can see sunlight

    


	int countBuildings(int h[], int n) {
       int i =0;
        int ans =0;
        int count =0;
        while(i<n){
            
            if(h[i]>ans){
                count ++;
                ans = h[i];
            }
            
            i++;
            
        }
        
        return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        Solution ob;
        auto ans = ob.countBuildings(h, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends