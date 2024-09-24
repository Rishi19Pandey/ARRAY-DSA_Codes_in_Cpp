// FindValueOfPascalTriangle.cpp

#include<iostream>
using namespace std;
long long FindValueOfPascalTriangle(int n , int r){
    long long res = 1;
    for(int i = 0 ; i < r ; i++){
        res = res * (n-i);
        res = res / (i+1);
    }
    return res;
}

int main(){
   int sizeOfRow , sizeOfCol;
   cout<<"Enter the Size of Row => ";
   cin>>sizeOfRow;
   cout<<endl;
   cout<<"Enter size of Column => ";
   cin>>sizeOfCol;
   long long answer = FindValueOfPascalTriangle(sizeOfRow-1 , sizeOfCol-1);
   cout<<"Answer is => "<<answer<<endl;
   return 0;
}