
//      longestsbstringwithoutRepeate.cpp

#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeating(string str){
    int maxLen = 0, i = 0 , j = 0;
    unordered_set<int> st;
    for(j = 0 ; j < str.length() ; j++){
            while(i<j && st.find(str[j]) != st.end()){
                st.erase(str[i]);
                i++;
            }
        if(st.find(str[j]) == st.end()){
            st.insert(str[j]);
            maxLen = max(maxLen , (j-i+1));
        }
    }
    return maxLen;
}

int main()
{
   string str = "pwwkew";
   cout<<"Longest Substring Without Repeating => "<<longestSubstringWithoutRepeating(str)<<endl;
    return 0;
}