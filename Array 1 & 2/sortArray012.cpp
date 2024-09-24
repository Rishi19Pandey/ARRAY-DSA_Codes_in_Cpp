#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortArray(int A[] , int size){
    int count0 = 0 , count1 = 0 , count2 = 0 , i = 0;
    for(i = 0 ; i< size ; i++){
        if(A[i] == 0)
            count0 += 1;
        else if(A[i] == 1)
            count1 += 1;
        else if(A[i] == 2)
            count2 += 1;
    }
    for( i = 0 ; i< count0 ; i++){
        A[i] = 0;
    }
    for( i = count0 ; i< count0 + count1 ; i++){
        A[i] = 1;
    }
    for( i = count0 + count1 ; i< size ; i++){
        A[i] = 2;
    }
}

int main(){
   int sizeOfArray;
   cout<<"Enter the size of Array => ";
   cin>>sizeOfArray;
   int A[sizeOfArray];
   cout<<"Enter Elements in Array => ";
   for(int i = 0 ; i< sizeOfArray ; i++){
    cin>>A[i];
   }
   sortArray(A , sizeOfArray);
   cout<<"Answer Array=> ";
   for(int i = 0 ; i< sizeOfArray ; i++){
    cout<<A[i]<<" ";
   }
   return 0;
}