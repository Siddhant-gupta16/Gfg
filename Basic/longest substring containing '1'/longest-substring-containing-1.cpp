//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
        int count = 0;
    int ans = 0;

    for (char c : s) {
        if (c == '1') {
            count++;
        } else {
            if (count > ans) {
                ans = count;
            }
            count = 0;
        }
    }

   
    if (count > ans) {
        ans = count;
    }

    return ans;

 
}