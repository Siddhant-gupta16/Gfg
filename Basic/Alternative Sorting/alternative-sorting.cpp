//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    	   sort(arr,arr+N);
	   vector<int>ans(N);
	   
	   int i=0;
	   int j = N-1;
	   int k=0;
	   
	   while(i<=j){
	       
	       ans[k]= arr[j];
	       ans[k+1]= arr[i];
	       k+=2;
	       i++;
	       j--;
	       
	   }
	   return ans;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends