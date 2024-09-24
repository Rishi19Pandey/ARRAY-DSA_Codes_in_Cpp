//      longestConsecutiveSequence.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestConsecutiveSequence(vector<int> &vec){
    int i = 0 , j = 0 , maxi = 1 , count = 0;
    for(i = 0 ; i < vec.size() ; i++){
        count = 1;
        int next =vec[i] + 1;
        for(j = 0 ; j < vec.size() ; j++){
            if(next == vec[j]){
                next += 1;
                count++;
                j = -1;
            }
        }
        maxi = max(maxi , count);
    }
    return maxi;
}

int longestConsecutiveSequenceOptimal(vector<int> &vec){
   int maxi = INT_MIN , count = 0;
   unordered_set<int> st;
   for(int i = 0 ; i< vec.size() ; i++){
    st.insert(vec[i]);
   }
   for(auto it : st){
    if(st.find(it-1) == st.end()){
        int x = it;
        count = 1;
        while(st.find(x+1) != st.end()){
            count++;
             x +=1;
        }
        maxi = max(maxi , count);
    }
   }
   return maxi;
}


int main(){
   vector<int> vec = {100,4,200,1,3,2 ,101,103,102,105,108,107,106,104};
   cout<<"Longest Consecutive Sequence => "<<longestConsecutiveSequence(vec)<<endl;
   cout<<"Longest Consecutive Sequence => "<<longestConsecutiveSequenceOptimal(vec)<<endl;
   return 0;
}