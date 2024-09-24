//      mejorityElement.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bruteForceMethod(vector<int> &vec){
    int i = 0 , j = 0 , size = vec.size() , count = 0;
    for(i = 0 ; i< size ; i++){
        count = 0;
        for(j = 0 ; j<size ; j++){
            if(vec[i] == vec[j]){
                count++;
            }
        }
        if(count > (size/2)){
            return vec[i];
        }
    }
    return -1;
}

int optimalSol(vector<int> &vec){
    int count = 0 , ele = 0 , count1 = 0 , i =0;
    for(i = 0 ; i< vec.size() ; i++){
        if(count == 0){
            ele = vec[i];
        }
        if(ele == vec[i]){
            count++;
        }
        else{
            count--;
        }
    }
    for(i = 0 ; i < vec.size() ; i++){
        if(ele == vec[i]){
            count1++;
        }
    }
    if(count1 > (vec.size()/2)){
        return ele;
    }
    return -1;
}

int main(){
   vector<int> vec = {1,5,5,5,5,4,5,4,5,4};
    cout<<"Mejority Element is => "<<optimalSol(vec);
   return 0;
}