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
        int ans[26]={0};
        
        for(int i=0;i<str.length();i++){
            int index=str[i]-'a';
            ans[index]++;
        }
        
        int maxi=-1,utr=-1;
        for(int i=0;i<26;i++){
            if(maxi<ans[i]){
                utr=i;
                maxi=ans[i];
            }
            
           
        }
         return 'a'+utr;
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