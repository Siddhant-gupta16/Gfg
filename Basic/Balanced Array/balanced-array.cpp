//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int q = n/2;
       int s =0;
       int e=0;
       for(int i=0;i<q;i++){
           s=s+a[i];
       }
       
       for(int i=q;i<n;i++){
           e=e+a[i];
       }
       int ans = abs(s-e);
       return ans;
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
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends