//          subArrayWithGivenXORk.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector<int> &vec ,int target){
    map<int,int> mpp;
    mpp[0]++;
    int xr = 0 , count = 0;
    for(int i = 0 ; i < vec.size() ; i++){
        xr = xr ^ vec[i];
        int rem = xr ^ target;
        count += mpp[rem];
        mpp[xr]++;
    }
    return count;
}

int main(){
   vector<int> vec = {4,2,2,6,4};
   int target = 6;
   cout<<"Count => "<<countSubarray(vec,target)<<endl;
   return 0;
}