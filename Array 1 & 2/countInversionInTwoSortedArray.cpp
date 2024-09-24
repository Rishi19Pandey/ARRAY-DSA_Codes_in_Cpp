//      countInversionInTwoSortedArray.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int coutInversion(vector<int> &vec1 , vector<int> &vec2){
    int i = 0 , j = 0 , count = 0;
    int vec1Size = vec1.size()-1 , vec2Size = vec2.size()-1;
    while(i<=vec1Size && j<=vec2Size){
        if(vec1[i]>vec2[j]){
            count += vec1Size-i +1;
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}

int main(){
   vector<int> vec1;
   vector<int> vec2;
   int vec1Size , vec2Size , i= 0 , data;
   cout<<"Enter size of vec 1 => ";
   cin>>vec1Size;
   cout<<"Enter Data in Vec1 => ";
   for(i = 0 ; i<vec1Size ; i++){
        cin>>data;
        vec1.push_back(data);
   }

   cout<<"Enter size of vec 2 => ";
   cin>>vec2Size;

   cout<<"Enter Data in Vec2 => ";
   for(i = 0 ; i<vec2Size ; i++){
        cin>>data;
        vec2.push_back(data);
   }
   cout<<"Count is => "<<coutInversion(vec1 , vec2);
   return 0;
}