#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void lpsfind(vector<int>&lps,string needle){
        int pre=0, suf=1;
        while(suf<needle.size()){
            if(needle[suf]==needle[pre]){
                lps[suf]= pre+1;
                pre++;suf++;
            }
            else{
                if(pre==0){
                    lps[suf]= 0;
                    suf++;
                }
                else{
                    pre= lps[pre-1];
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int>lps(needle.size(),0);
        lpsfind(lps, needle);
        int first=0, second=0;
        while(second<needle.size() && first<haystack.size()){
            if(haystack[first]==needle[second]){
                first++;second++;
            }
            else{
                if(second==0){
                    first++;
                }
                else{
                    second= lps[second-1];
                }
            }
        }
        if(second==needle.size()){
            return first-second;
        }
        return -1;
        /*
        BRUTE FORCE
        int first=0, second=0;
        int n=haystack.length(), m= needle.length();
        for(int i=0;i<n-m;i++){
            first=i, second=0;
            while(second<m){
                if(haystack[first] != needle[second]){
                    break;
                }
                else{
                    first++;second++;
                }
            }
            if(second==m){
                return i;
            }
        }
        return -1;
        */
    }
};