//      searchIn2DMatrix.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchIn2DMatrixusingBinarySearch(vector<vector<int>> &vec , int target){
    int col = vec[0].size() , row = vec.size() , low = 0 , high = (row * col) - 1 , mid = 0 ;
    while(low <= high){
         mid = (low + high) / 2;
        if(vec[mid/col][mid%col] < target){
            low = mid + 1;
        }
        else if(vec[mid/col][mid%col] > target){
            high = mid - 1;
        }
        else{
            return true;
        }
    }
    return false;
}

bool searchIn2DMatrixOptimalSol(vector<vector<int>> &vec , int searchData){
    int i= 0 , j = vec[0].size()-1, row = vec.size() , ele = 0;
    while(i < row && j >= 0 ){
        ele = vec[i][j];
        if(ele < searchData){
            i++;
        }
        else if(ele > searchData){
            j--;
        }
        else{
            return true;
        }
    }
    return false;
}

bool searchIn2DMatrixBruteForce(vector<vector<int>> &vec , int searchData){
    int row = vec.size(),  col = vec[0].size() , i = 0 , j = 0;
    for(i = 0 ; i < row ; i++){
        for(j = 0 ; j<col ; j++){
            if(vec[i][j]==searchData){
                return true;
            }
        }
    }
    return false;
}

int main(){
   vector<vector<int>> vec = {{1,2,5,7},{10,11,16,20},{23,30,34,50}};
   int searchData ; 
   cout<<"Enter the Search Data = >";
   cin>>searchData;
   cout<<"IS data present => "<<searchIn2DMatrixusingBinarySearch(vec , searchData);
   return 0;
}