// buyAndSellStocksOptimal.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int buyAndSellStocksOptimal(int A[] , int size){
   int profit = 0 , cost = 0 , minimun = A[0];
   for(int i = 1 ; i < size ; i++){
      cost = A[i] - minimun;
     profit =  max(cost , profit);
      minimun = min(minimun , A[i]);
   }
   return profit;
}

int main(){
   int sizeOfArray;
   cout<<"Size of Array => ";
   cin>>sizeOfArray;
   int A[sizeOfArray];
   cout<<"Enter the Elements of Array => ";
   for(int i = 0 ; i< sizeOfArray ; i++){
      cin>>A[i];
   }
   cout<<"Maximun Profit => " <<buyAndSellStocksOptimal(A , sizeOfArray);
   return 0;
}