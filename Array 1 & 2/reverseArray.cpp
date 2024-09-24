//reverseArray.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int A[] , int size){
    int p = 0;
    for(int i = 0 ; i<size/2 ; i++){
        swap(A[i] , A[size-i-1]);
    }
}

int main(){
   int x;
   cout<<"Enter size of Array=> ";
   cin>>x;
   int A[x];
   cout<<"Enter Elements in Array=> ";
   for(int i = 0 ; i<x ; i++){
    cin>>A[i];
   }
   reverseArray(A, x);
   for(int i = 0 ; i<x ; i++){
    cout<<A[i]<<"  ";
   }
   return 0;
}