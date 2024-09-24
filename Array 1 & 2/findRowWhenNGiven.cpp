// findRowWhenNGiven.cpp            (Pascal Triangle)

#include<iostream>
using namespace std;
void findRowWhenNGiven(int n){
    int ans;
    for(int i = 0 ; i < n ; i++){
        if(i == 0)
             ans = 1;
        else{
        ans = ans * (n-i);
        ans = ans / i;
        }
        cout<<ans<<" ";
    }
}

int main(){
   int row;
   cout<<"Enter Row => ";
   cin>>row;
   findRowWhenNGiven(row);
   return 0;
}