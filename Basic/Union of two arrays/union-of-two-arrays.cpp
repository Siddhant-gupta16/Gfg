//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //  vector<int>ans;
        // //intersection 
        // for(int i=0;i<n;i++){
        //     int elemnt = a[i];
        //     for(int j=0;j<m;j++){
                
        //         if(elemnt==b[j]){
        //             b[j] = INT_MIN;
        //             ans.push_back(elemnt);
        //         }
        //     }
            
        // }
        
        // // uninon
        
        // vector<int>arr;

        //   for(int i=0;i<n;i++){
        //   arr.push_back(a[i]);
        //                       }

        //   for(int i=0;i<m;i++){
            
        //     if(b[i]!=INT_MIN){
        //     arr.push_back(b[i]);}
        //     }
        
        
        
        
        
          
        // return arr.size();
        
        
        set<int>ans;
        
        for(int i=0;i<n;i++){
            ans.insert(a[i]);
        }
        
        for(int i=0;i<m;i++){
            ans.insert(b[i]);
        }
        
        
        return ans.size();
       
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends