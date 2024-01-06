//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int minManipulation (int n, string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << minManipulation (n, s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minManipulation (int N, string S1, string S2)
{
       
       
        int hash[256]={0};
        
        
        for(int i=0;i<N;i++){
            hash[S1[i]]++;
        }
        
        for(int i=0;i<N;i++){
            hash[S2[i]]--;
        }
        int ans=0;
        
        for(int i=0;i<256;i++){
            if(hash[i]!=0){
                ans = ans + abs(hash[i]);
                // cout<<ans<<" ";
            }
        }
        return ans/2;
}