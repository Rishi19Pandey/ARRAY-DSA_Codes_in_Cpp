//      countInversionOfAnArray.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Brute Force
int countOfPairs(vector<int> vec){
    int count = 0 , size = vec.size(), i = 0 , j =0;
    for(i = 0 ;i< size-1 ; i++){
        for(j = i+1 ; j<size ; j++){
            if(vec[i]>vec[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
   vector<int> vec;
   vec.push_back(5);
   vec.push_back(3);
   vec.push_back(2);
   vec.push_back(4);
   vec.push_back(1);
   cout<<"Count of Pairs => "<<countOfPairs(vec);
   return 0;
}