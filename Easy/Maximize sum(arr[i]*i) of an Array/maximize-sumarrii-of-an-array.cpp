//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
       sort(a,a+n);
       long long int  ans =0;
        const long long int MOD = 1000000007; 
       
       for(int i=0;i<n;i++){
           ans = (ans + (static_cast<long long int>(a[i]) * i)) % MOD;
       }
    
       return ans;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends