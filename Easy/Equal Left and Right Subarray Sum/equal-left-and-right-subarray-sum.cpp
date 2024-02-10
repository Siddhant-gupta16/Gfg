//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        
      if(N == 1){
        return 1;
    }
    
    int i = 0;
    int j = N - 1;
    long long leftSum = 0;
    long long rightSum = 0;

    while(i <= j) {
        if(leftSum == rightSum && i == j) {
            return i + 1;
        }
        
        if(leftSum <= rightSum) {
            leftSum += A[i++];
        } else {
            rightSum += A[j--];
        }
    

        
        
        
        
        
        
       
        
        
        
    }
    
       return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends