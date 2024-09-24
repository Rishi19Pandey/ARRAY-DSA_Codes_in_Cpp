//          uniquePath.cpp

// Not run Here


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach 

int uniquePath(int row , int col , int i , int j){
    if(i == row || j == col)
        return 0;
    if(i == row-1 && j == col-1)
        return 1;
    return uniquePath(row , col , i+1 , j) + uniquePath(row , col , i , j+1);
}

int onlySizeOf2dArray(int row , int col){
    if(row == 0 || col == 0)
        return 0;
    if(row == 1 && col == 1)
        return 1;
    return onlySizeOf2dArray(row-1 , col) + onlySizeOf2dArray(row , col-1);
}

int superOptimalSolution(int m , int n){
    int numberOfSteps = m+n-2;
    int numberOfrow = m-1;
    int ans = 1;
    for(int i=0 ; i<numberOfrow ; i++){
        ans = ans * (numberOfSteps - i);
        ans = ans / (i + 1);
    }
    return ans;
}

int main(){
    int row = 5 , col = 8;
    cout<<"Unique Path 1 = > "<<uniquePath( row , col , 0 , 0)<<endl;
    cout<<"Unique Path 2 = > "<<onlySizeOf2dArray( row , col)<<endl;
    cout<<"Unique Path 3 = > "<<superOptimalSolution( row , col)<<endl;
   return 0;
}