//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
       int binary(vector<int>nums,int target,int s,int e){
       
       int mid = s+(e-s)/2;
       
       while(s<=e){
           
           if(nums[mid]==target){
               return mid;
           }
           
           if(nums[mid]>target){
               e =mid-1;
           }
           else{
               s =mid+1;
           }
           mid = s+(e-s)/2;
       }
       
       
       return -1;
           
       }
       
        
        int pivot(vector<int>nums){
        int s=0;
        int e= nums.size()-1;
        int mid = s+(e-s)/2;
        
        while(s<e){
            if(mid+1<nums.size()&&nums[mid]>nums[mid+1]){
              return mid;
             }
              if (mid-1>=0 &&nums[mid-1]>nums[mid]){
                  return mid-1;
              }
            
              if(nums[mid]<=nums[s]){
                  e=mid-1;
              }
              else{
                  s = mid;
              }
            
              mid = s+(e-s)/2;
        }
        
        return s;
        
    }
    
    
    
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
        int n =h+1;
     vector<int>nums(n);
     for(int i=0;i<n;i++){
         nums[i]=A[i];
     }
        
        
        int index = pivot(nums);
        
        if(nums[0]<=key&&nums[index]>=key){

         int ans = binary(nums,key,0,index);
            return ans;
      }
        
        if(index+1<nums.size()&&nums[index+1]<=key&&nums[n-1]>=key){
            int ans = binary(nums,key, index+1,nums.size());\
                return ans;
            
        }
               return -1;
        
        
        
        
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends