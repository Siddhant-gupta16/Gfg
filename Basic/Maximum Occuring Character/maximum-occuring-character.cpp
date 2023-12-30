//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int>mp;
        int ans =0;
        char a ;
        for(int i=0;i<str.length();i++){
            mp[str[i]]++;
        }
        
        for(auto it:mp){
            
            auto temp =it.second;
            if(ans<temp){
                ans = temp;
                a= it.first;
            }
            
        }
        
        
        
        
        return a;
        
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends