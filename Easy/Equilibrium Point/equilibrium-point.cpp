//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
  int i=0;
        int j=n-1;
        long long  c1=0;
        long long  c2=0;
        int in=0;
        c1=c1+a[i];
        c2=c2+a[j];
        i++;
        j--;
        in++;
        in++;

        while(i<=j)
        {
            if(c1==c2 && in==n-1)
            {
                return i+1;
            }
            if(c1>=c2)
            {
                c2=c2+a[j];
                 j--;
                 in++;
            }
            if(c2>c1)
            {
                
               c1=c1+a[i];
                i++;
                in++;
            }

        }
        if(n==1)
        {
            return i;
        }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends