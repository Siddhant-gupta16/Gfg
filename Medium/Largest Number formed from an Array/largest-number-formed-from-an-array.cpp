//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	   	static bool comp(string a,string b){
	    string t1=a+b;
	    string t2=b+a;
	    return t1>t2;
	}
	string printLargest(vector<string> &arr) {
	    
	    
	    sort(arr.begin(),arr.end(),comp);
	    if(arr[0]=="0") return "0";
	    string result="";
	    for(auto s:arr){
	        result+=s;
	    }
	    return result;
	
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends