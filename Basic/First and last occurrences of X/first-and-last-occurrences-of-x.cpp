//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
       vector<int>ans; 
      int i=0;
      int j= n-1;
      
      
      while(i<=j){
          if(arr[i]==x){
              ans.push_back(i);
              break;
            
          }
         
          i++;
         
          
      }
      
      
      while(i<=j){
          
          if(arr[j]==x){
              ans.push_back(j);
              break;
              
          }
          j--;
      }
      
      if(ans.empty()){
          ans.push_back(-1);
      }
      
      return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends