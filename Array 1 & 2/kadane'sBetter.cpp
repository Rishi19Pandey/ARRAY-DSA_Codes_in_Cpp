//  kadane'sBetter.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long kadanebetter(int A[] , int size){
   int sum , max = INT_MIN;
   for(int i = 0 ; i< size; i++){
       sum = 0;
      for(int j = i ; j< size ; j++){
         sum += A[j];
         if(max < sum){
            max = sum;
         }
      }
   }
   return max;
}

int main(){
   int sizeOfArray;
   cout<<"Enter the size of Array => ";
   cin>>sizeOfArray;
   int A[sizeOfArray];
   cout<<"Enter the Elements In Array => ";
   for(int i=0 ; i< sizeOfArray ; i++){
    cin>>A[i];
   }
   cout<<"Maximum of Sub Aarray is => "<<kadanebetter(A , sizeOfArray)<<endl;
   return 0;
}