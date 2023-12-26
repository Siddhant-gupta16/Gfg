//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>brr(n,0);
	   int t=0;
	    for(int i=0;i<n;i++){
	       brr[i]=arr[i];
	       if(arr[i]<0)
	       {
	           t++;
	       }
	   }
	   
	   int e=0;
	   int i=0;
	   int j= n-t;
       while(i<n){
	       
	       if(brr[i]<0){
	           arr[j]=brr[i];
	           i++;
	           j++;
	          
	       }
	       
	       else{
	            arr[e]=brr[i];
	           i++;
	           e++;
	           
	       }
	       
	      
	       
	   }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends