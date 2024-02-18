//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	   
	  
	           vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            ans.push_back(arr[i]);
        }
    }

    vector<int> bsn;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            bsn.push_back(arr[i]);
        }
    }

    int i = 0, j = 0, k = 0;

    // Rearrange the array
    while (i < ans.size() && j < bsn.size()) {
        arr[k++] = ans[i++];
        arr[k++] = bsn[j++];
    }

    // If there are remaining positive numbers
    while (i < ans.size()) {
        arr[k++] = ans[i++];
    }

    // If there are remaining negative numbers
    while (j < bsn.size()) {
        arr[k++] = bsn[j++];
    }
}

	           
	           
	       
	       
	       
	       
	       
	       
	       
	       
	       
	       
	   
	   
	   
	   
	   
	   
	   
	   
	   
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends