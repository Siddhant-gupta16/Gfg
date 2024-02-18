//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
      	  
	           vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            ans.push_back(a[i]);
        }
    }

    vector<int> bsn;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            bsn.push_back(a[i]);
        }
    }

    int i = 0, j = 0, k = 0;

    
    while (i < ans.size() && j < bsn.size()) {
        a[k++] = ans[i++];
        a[k++] = bsn[j++];
    }

    
    while (i < ans.size()) {
        a[k++] = ans[i++];
    }

    while (j < bsn.size()) {
        a[k++] = bsn[j++];
    }
   vector<int>ab;
   for(int i=0;i<n;i++){
       ab.push_back(a[i]);
   }
  return ab ;
	 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends