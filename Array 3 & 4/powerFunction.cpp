//      powerFunction.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double powerFunction(double x , int n){
    double ans = 1.0;
    long long num = n;
    if(num < 0){
        num = num * -1;
    }
    while(num){
        if(num % 2){
            ans = ans * x;
            num = num - 1;
        }
        else{
            x = x * x;
            num = num / 2;
        }
    }
    if(n<0){
        ans = double(1.0)/double(ans);
    }
    return ans;
}

double powerBruteForce(double x , int n){
    long long num  = n;
    double ans = 1.0;
    if(num < 0){
        num = num * -1;
    }
    for(int i = 0 ; i < num ; i++){
        ans = ans * x ;
    }
    if(n < 0){
        return double(1.0)/double(ans);
    }
    return ans;
}


int main(){
    int pow = 0;
    double base = 0;
    cout<<"Enter base Value => ";
    cin>>base;
    cout<<"Enter power => ";
    cin>>pow;
    cout<<"Answer is => "<<powerBruteForce(base , pow);
   return 0;
}
