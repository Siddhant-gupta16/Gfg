//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        sort(arr.begin(),arr.end());
        vector<int>ans{0,1};
        int i=0;
        int j=1;
        

        
        while(i<n){
            
            if(arr[i]==arr[j]){
                ans[0]=arr[i];
                
            }
            
            i++;
            j++;

        }
        unique(arr.begin(),arr.end());
        int m=0;
        int count=1;
        
        
        while(m<arr.size())
        {
            
            if(arr[m]!=count){
                
                ans[1]=count;
            }
            else{
            count++;}
            m++;

        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends