#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverseCountBruteForce(vector<int> &vec){
    int i = 0 , j= 0 , count = 0;
   for(i = 0 ; i<vec.size() ; i++){
    for(j = i+1 ; j<vec.size() ; j++){
        if(vec[i] > 2*vec[j]){
            count++;
        }
    }
   }
   return count;
}

int main(){
    vector<int> vec = {1,3,2,3,1};
    cout<<"Count of REverse Pair is => "<<reverseCountBruteForce(vec);
   return 0;
}