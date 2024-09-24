//          longestSubarrayWithSumK_NegativeAndPositive.cpp (Optimal Solution)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK_PositiveAndNegative(vector<int> &vec , long long sum){
    map<long long , int> mpp;
    int i = 0 , maxLen = 0;
    long long add = 0;
    for(i = 0 ; i< vec.size() ; i++){
        add += vec[i];
        if(add == sum){
            maxLen = max(maxLen , i+1);
        }
        long long rem = add - sum;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen , len);
        }
        if(mpp.find(add) == mpp.end()){
            mpp[add] = i;
        }
    }
    return maxLen;
}

int main(){
   vector<int> vec={1,2,3,1,1,1,1};
   int sum = 3;
   cout<<"Longest Subarray With Sum K => "<<longestSubarrayWithSumK_PositiveAndNegative(vec, sum)<<endl;
   return 0;
}