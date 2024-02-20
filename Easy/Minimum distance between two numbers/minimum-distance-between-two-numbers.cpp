//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
         
         
     int min_dist = INT_MAX;
    int last_x_index = -1;
    int last_y_index = -1;
    
  
    for (int i = 0; i < n; ++i) {
    
        if (a[i] == x) {
            last_x_index = i;
       
            if (last_y_index != -1)
                min_dist = min(min_dist, abs(last_x_index - last_y_index));
        }
  
        else if (a[i] == y) {
            last_y_index = i;
  
            if (last_x_index != -1)
                min_dist = min(min_dist, abs(last_x_index - last_y_index));
        }
    }
    

    if (min_dist == INT_MAX || min_dist == 0)
        return -1;
    
    return min_dist;

         
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends