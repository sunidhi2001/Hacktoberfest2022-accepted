#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) 
    {
        int n=S.size();
        int max_len=1;
       if(S.length()<=1) return S;
       int st=0;
       int end=0;
       for(int i=0;i<n-1;i++)
       {
           int l=i,r=i;
           while(l>=0 && r<n)
           {
               if(S[l]==S[r])
               {
                   l--;r++;
               }
               else
               {
                   break;
               }
           }
           int len=r-l-1;
           if(max_len<len)
           {
               max_len=len;
               st=l+1;
               end=r-1;
           }
           
       }
       for(int i=0;i<n-1;i++)
       {
           int l=i,r=i+1;
           while(l>=0 && r<n)
           {
               if(S[l]==S[r])
               {
                   l--;r++;
               }
               else
               {
                   break;
               }
           }
           int len=r-l-1;
           if(max_len<len)
           {
               max_len=len;
               st=l+1;
               end=r-1;
           }
           
       }
        return S.substr(st,max_len);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
