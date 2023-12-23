//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
	   int n=A.size();
		int m=A[0].size();
		int s=n*m;
		int co=0;
		for(int i=0;i<s-1;i++)
		{
		    int r=i/n;
		    int c=i%m;
		    
		    if(A[r][c]==0)
		    {
		        co++;
		    }

		    
		}
		return co;
	
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends