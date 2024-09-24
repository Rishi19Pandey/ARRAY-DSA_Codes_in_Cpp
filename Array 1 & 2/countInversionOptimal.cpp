//      countInversionOptimal.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &vec , int low , int mid , int high){
   int i = low , j = mid+1 , count = 0;
   vector<int> ans;
   while(i <=mid && j <= high){
      if(vec[i]<=vec[j]){
         ans.push_back(vec[i]);
         i++;
      }
      else{
         ans.push_back(vec[j]);
         count += mid-i+1;
         j++;
      }
   }
   while(i<=mid){
      ans.push_back(vec[i]);
      i++;
   }
   while(j<=high){
      ans.push_back(vec[j]);
      j++;
   }
   for(i = low ; i<= high ; i++){
      vec[i] = ans[i-low];
   }
   return count;
}

int ms(vector<int> &vec , int low , int high){
   int count = 0 ;
   if(low == high) return count;
   int mid = (low+high)/2;
   count += ms(vec , low , mid);
   count += ms(vec , mid+1 , high);
   count += merge(vec , low , mid , high);
   return count;
}

int countInversion(vector<int> &vec){
   int size = vec.size();
   return ms(vec , 0 , size-1);
}

int main(){
   vector<int> vec;
   int sizeOfVector , i = 0 , data = 0;
   cout<<"Enter the Size of Vector => ";
   cin>>sizeOfVector;
   cout<<"Enter data in Vector => ";
   for(i = 0 ; i < sizeOfVector ; i++){
      cin>>data;
      vec.push_back(data);
   }
   cout<<"Count inversion is => "<<countInversion(vec)<<endl;
   return 0;
}
