//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        vector<int>brr(n);
        
        for(int i =0;i<n;i++){
            brr[i]=arr[i];
        }
        
        int j =0;
        for(int i=d;i<n;i++){
            
         arr[j]=brr[i];
         j++;
            
        }
        
        for(int i =0;i<d;i++){
            arr[j]=brr[i];
            j++;
        }
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends