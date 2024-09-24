// kadane'sOptimal.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long KanadesOptimal(int A[] , int size){
    int sum = 0 , max = INT_MIN;
    int start= 0 , first = -1 , last = -1;
    for(int i =0 ; i<size ; i++){
        if(sum == 0) start = i;
        sum = sum + A[i];
        if(max < sum){
            max = sum;
            first = start;
            last = i;
        }
        if(sum < 0)
            sum = 0;
    }
    for(int i = first ; i <= last ; i++){
        cout<<A[i]<<" ";
    }
    return max;
}

int main(){
   int sizeOfArray;
   cout<<"Enter the size of Array => ";
   cin>>sizeOfArray;
   int A[sizeOfArray];
   cout<<"Enter the Elements Of Array => ";
   for(int i=0 ; i< sizeOfArray ; i++){
    cin>>A[i];
   }
   cout<<"Maximum Sum is => "<<KanadesOptimal(A,sizeOfArray)<<endl;
   return 0;
}