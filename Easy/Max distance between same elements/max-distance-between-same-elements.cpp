//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
     int i =0;
     int j = n-1;
     int ans = INT_MIN;
    
     while(i<n){
        if(arr[i]==arr[j]){
           int b = j-i; 
           if(b>ans){
               ans = b ;
           }
           i++;
            j = n - 1;
        }
        
        else if(j==i){
            i++;
            j=n-1;
            
        }
        
        
        else{
        
       
        j--;
     }
     }
     return ans ;
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends