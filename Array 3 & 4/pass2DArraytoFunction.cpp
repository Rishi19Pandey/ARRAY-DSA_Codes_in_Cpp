//          pass2DArraytoFunction.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int pass2DArray(int *A , int row , int col){
    for(int i = 0 ; i< row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<*(A+i*col+j)<<"  ";
        }
        cout<<endl;
    }
    return 3;
}

void pass2dVector(vector<vector<int>> &vec){
    int m = vec.size() , n = vec[0].size();
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int pass02dVector(vector<vector<int>> &vec){
    int m = vec.size() , n = vec[0].size();
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row = 2 , col = 3;
   int A[row][col] = {
    {1, 2 , 13},
    {4 , 15 , 6}
   };
//    cout<<"Unique Path = > "<<pass2DArray((int *)A , row , col);
    vector<vector<int>> vec = {
        {1 ,2 , 3},
        {4 , 5 , 6},
        {7 , 8 , 9}
    };

    vector<vector<int>> zero(row+1 , vector<int>(col+1 , -1));  
    cout<<"Elements => "<<pass02dVector(zero);
   return 0;
}