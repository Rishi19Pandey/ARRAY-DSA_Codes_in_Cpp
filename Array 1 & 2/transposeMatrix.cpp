// transposeMatrix.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &num1 , int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
   int m = 4 , n = 4 , i ,j;
   cout<<"Enter elements in Matrix => "<<endl;
   int mat[m][n];
   for(i = 0 ; i< m ; i++){
    for(j = 0 ; j <n ; j++){
        cin>>mat[i][j];
    }
   }
 
 // Transpose 

   for(i = 0; i<m-2 ; i++){
    for(j = i+1  ; j<n ; j++){

       swap(mat[i][j] , mat[j][i]);
    }
   }
   

   cout<<"Matrix is => "<<endl;
    for(i = 0 ; i< m ; i++){
    for(j = 0 ; j <n ; j++){
        cout<<mat[i][j]<<"   ";
    }
    cout<<endl;

   }
   return 0;
}