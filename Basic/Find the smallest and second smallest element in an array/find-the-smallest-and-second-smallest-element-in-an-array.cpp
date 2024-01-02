//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int>ans{-1,-1};
    sort(a,a+n);
    ans[0]=a[0];
  for(int i=1;i<n;i++){
     if(a[0]!=a[i]){
         ans[1]=a[i];
         break;
     }
 }
  
  if(ans[1]==-1){
      ans[0]=-1;
  }
  
 
 
    return ans;
}