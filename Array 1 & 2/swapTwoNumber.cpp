// swapTwoNumber.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
   int num1 , num2;
   cout<<"Enter first Number => ";
   cin>>num1;
   cout<<"Enter Second Number => ";
   cin>>num2;
   cout<<"Before Swap = > "<<num1 <<"   "<<num2<<endl;
   swap(num1 , num2);
    cout<<"After Swap = > "<<num1 <<"   "<<num2<<endl;
   return 0;
}