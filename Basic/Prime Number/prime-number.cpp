//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
     if (N <= 1) {
        return 0; // 1
    }

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i <= sqrt(N); ++i) {
        if (N % i == 0) {
            return 0; // n is divisible by i, so it's not a prime number
        }
    }

    return 1;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends