// buyAndSellStocksBruteForce.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int buyAndSellStocksBruteForce(int A[] , int size){
    int max = 0 , profit;
    for(int i = 1 ; i<size ; i++){
        profit = 0;
        for(int j = 0 ; j < i ; j++){
            profit = A[i] - A[j];
            if(max < profit){
                max = profit;
            }
        }

    }
    return max;
}

int main(){
   int sizeOfArray ;
   cout<<"Enter the size of Array => ";
   cin>>sizeOfArray;
   int A[sizeOfArray];
   cout<<"Enter Elemen  ts in Array=> ";
   for(int i = 0 ; i< sizeOfArray ;i++){
    cin>>A[i];
   }
   cout<<"Max Profit is => "<<buyAndSellStocksBruteForce(A ,sizeOfArray)<<endl;
   return 0;
}