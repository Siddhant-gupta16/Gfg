//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends

#include <string>    
//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x){
// {
//      int i=0;
//      int j=0;
     
//      while(j<x.length()){
         
//          if(s[i]==x[j]){
//              i++;
//              j++;
//          }
         
//          i++;



        int  a = s.find(x);
       
        return a;
         
         
     
}