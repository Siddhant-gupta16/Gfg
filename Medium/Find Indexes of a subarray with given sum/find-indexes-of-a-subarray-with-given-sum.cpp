//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int l=0;
        int r=0;
        long long sum=arr[0];
        
        vector<int>result;
        while (r < n && l<=r) {
        if (sum == s) {
            result.push_back(l+1);
            result.push_back(r+1);
            break;
        } else if (sum < s) {
            r++;
            if (r < n) {
                sum += arr[r];
            }
        } else {
            sum -= arr[l];
            l++;
            if (l > r) {
                r = l;
                if (r < n) {
                    sum = arr[r];
                }
            }
        }
    }

    if(result.empty()){
        result.push_back(-1);
    } 
    return result;
    }
};



//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends