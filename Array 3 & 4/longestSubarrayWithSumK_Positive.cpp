//          longestSubarrayWithSumK_Positive.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> &vec , int sum){
    int i= 0 , j = 0 , k = 0 , add = 0, maxNum = 0 , size = vec.size();
    for(i = 0 ; i< size ; i++){
        add += vec[i];
    }
    if(sum>add)
        return -1;
    for(i = 0 ; i < size ; i++){
        for(j = i ; j <size ; j++){
            add = 0;
            for(k = i ; k <= j ; k++){
                add += vec[k];
            }
            if(add == sum){
                maxNum = max(maxNum , (j-i+1));
            }
        }
    }
    return maxNum;
}

int longestSubarrayWithSumKBruteForce(vector<int> &vec , int sum){
    int add = 0 , i = 0 , j = 0 , size = vec.size() , maxNum = 0;
    for(i = 0 ; i < size ; i++){
        add = 0;
        for(j = i ; j < size ; j++){
            add += vec[j];
            if(add == sum){
                maxNum = max(maxNum ,j-i+1);
            }
            if(add > sum)
                break;
        }
    }
    return maxNum;
}

int main(){
   vector<int> vec={1,2,3,1,1,1,1,4,2,3};
   int sum = 5;
   cout<<"Longest Subarray With Sum K => "<<longestSubarrayWithSumK(vec, sum)<<endl;
   cout<<"Longest Subarray With Sum K => "<<longestSubarrayWithSumKBruteForce(vec, sum);
   return 0;
}