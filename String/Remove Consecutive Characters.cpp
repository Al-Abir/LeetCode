//Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
     int len = S.length();
        string ans = "";
        for (int i = 0; i < len - 1; i++) {
            if (S[i] == S[i + 1])
                continue;
            else {
                ans = ans + S[i];
            }
        }
        ans = ans + S[len - 1]; // Adding the last character
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 