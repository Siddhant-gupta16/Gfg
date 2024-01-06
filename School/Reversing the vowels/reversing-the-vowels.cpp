//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool vowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
     
    
        string modify (string s)
        {
            int i=0; int j = s.length()-1;
            
            while(i<j){
                
                if(vowel(s[i])&& vowel(s[j])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                
                else if(!vowel(s[i])){
                    i++;
                }
                else{
                    j--;
                }
            }
            
            return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends