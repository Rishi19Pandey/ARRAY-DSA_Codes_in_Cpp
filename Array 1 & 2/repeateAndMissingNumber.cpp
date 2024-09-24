//  repeateAndMissingNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> BruteForceMethod(vector<int> vec){
    int i = 0 , j = 0 , repeat = -1 , missing = -1 , count = 0;
    for(i=1 ; i <= vec.size() ; i++){
        count = 0;
        for(j = 0 ; j<vec.size() ; j++){
            if(vec[j] == i){
                count++;
            }
        }
        if(count == 2){
            repeat = i;
        }
        if(count == 0){
            missing = i;
        }
        if(repeat != -1  && missing != -1){
            break;
        }
    }
    return {repeat,missing};
}


vector<int> usingAuxArray(vector<int> vec){
    int i =0 , missing = -1 , repeat = -1 , aux[vec.size()+1]={0};
    for(i = 0 ; i< vec.size() ; i++){
        aux[vec[i]]++;
    }

    for(i = 1 ; i<vec.size()+1 ; i++){
        if(aux[i] == 2){
            repeat = i;
        }
        else if(aux[i] == 0){
            missing = i;
        }
        else if(repeat != -1  && missing != -1){
            break;
        }
    }
    return {repeat,missing};
}

vector<int> optimalSol(vector<int> vec){
    long long s=0 , sn=0 , s2=0 , s2n=0 , repeat = 0 , missing = 0;
    long long size = vec.size();
    sn = (size * (size+1))/2;
    s2n = (size * (size+1) * ((2*size) +1))/6;
    for(int i = 0 ; i<size ; i++){
        s += vec[i];
        s2 += (long long)vec[i] * (long long)vec[i];
    }
    long long val1 = 0 , val2 = 0;
    val1 = s - sn;
    val2 = s2 - s2n;
    val2 = val2/val1;
    repeat = (val1 + val2)/2;
    missing = repeat - val1;
    return {(int)repeat , (int)missing};
}

int main(){
   vector<int> vec , ans;
//    vec.push_back(4);
//    vec.push_back(3);
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(1);
//    vec.push_back(5);

      vec.push_back(1);
      vec.push_back(3);
      vec.push_back(4);
      vec.push_back(1);
      vec.push_back(2);

   ans =  optimalSol(vec);
   cout<<"Repeat & Missing => "<<ans[0]<<" "<<ans[1];
   return 0;
}