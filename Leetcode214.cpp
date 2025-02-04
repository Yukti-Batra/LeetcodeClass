#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int lpsfind(vector<int>&lps, string s){
        int pre=0, suf=1;
        while(suf<s.length()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                suf++;pre++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre= lps[pre-1];
                }
            }
        }
        return lps[s.length()-1];
    }
    string shortestPalindrome(string s) {
        string temp=s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+="$";
        s+= rev;
        vector<int> lps(s.length(),0);
        int palindrome=lpsfind(lps,s);
        int ans= temp.length()-palindrome;
        string sub="";
        for(int i=palindrome;i<temp.length();i++){
            sub+=temp[i];
        }
        reverse(sub.begin(), sub.end());
        sub+=temp;
        return sub;
    }
};