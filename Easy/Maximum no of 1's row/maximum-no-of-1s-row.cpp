//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            int count =0;
            int ans = INT_MIN;
            int a =0;
           for(int i=0;i<N;i++){
               for(int j=0;j<M;j++){
                   if(Mat[i][j]==1){
                       count++;
                   }
               }
               if(count>ans){
                   ans = count;
                  a =i;
                  
               }
                count =0;
               
           }
           return a;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends