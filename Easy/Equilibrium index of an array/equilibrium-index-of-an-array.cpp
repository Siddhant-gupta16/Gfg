//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
 int i=0;
        int j=n-1;
        long long  c1=0;
        long long  c2=0;
        int in=0;
        c1=c1+A[i];
        c2=c2+A[j];
        i++;
        j--;
        in++;
        in++;

        while(i<=j)
        {
            if(c1==c2 && in==n-1)
            {
                return i;
            }
            if(c1>=c2)
            {
                c2=c2+A[j];
                 j--;
                 in++;
            }
            if(c2>c1)
            {
                
               c1=c1+A[i];
                i++;
                in++;
            }

        }
        
        if(n==1)
        {
            return i-1;
        }
        
        return -1;

}