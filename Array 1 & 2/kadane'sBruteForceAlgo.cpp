#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long kadaneAlgo(int A[] , int size){
    int sum , max = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        for(int j = i ; j < size ; j++){
            sum = 0;
            for(int k = i ; k<= j ; k++){
                sum += A[k];
            }
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
   cout<<"Enter Elements Of Array => ";
   for(int i = 0 ; i<sizeOfArray ; i++){
    cin>>A[i];
   }
   cout<<"Maximum Of Sub Array => "<<kadaneAlgo(A, sizeOfArray);
   return 0;
}