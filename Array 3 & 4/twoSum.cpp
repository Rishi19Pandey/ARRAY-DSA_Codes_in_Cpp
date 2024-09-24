#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSumProblem(vector<int> &vec , int target){
    map<int , int> mpp;
    int size = vec.size();
    for(int i = 0 ; i< size ; i++){
        int num = vec [i];
        int needed = target - num;
        if(mpp.find(needed) != mpp.end()){
            return {mpp[needed] , i};
        }
        mpp[num] = i;
    }
    return {-1 , -1};
}

int main(){
   vector<int> vec = {3,3};
   int target = 6;
   vector<int> ans;
   ans = twoSumProblem(vec , target);
   for(auto i : ans){
    cout<<i<<" ";
   }
   return 0;
}