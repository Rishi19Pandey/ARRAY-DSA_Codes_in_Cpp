//  rotateMatrix90degreeBruteForce.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int m = 4 , n = 4 , i ,j , size = m - 1;
   cout<<"Enter elements in Matrix => "<<endl;
   int mat[m][n];
   for(i = 0 ; i< m ; i++){
    for(j = 0 ; j <n ; j++){
        cin>>mat[i][j];
    }
   }
   int ans[m][n];
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j< n ; j++){
            ans[j][size - i] = mat[i][j];
        }
    }

   cout<<"Matrix is => "<<endl;
    for(i = 0 ; i< m ; i++){
    for(j = 0 ; j <n ; j++){
        cout<<ans[i][j]<<"   ";
    }
    cout<<endl;

   }

   return 0;
}