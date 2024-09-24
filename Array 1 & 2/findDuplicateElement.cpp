//  findDuplicateElement.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findDuplicateElement(vector<int> & nums){
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }

int main(){
   vector<int> vec;
   vec.push_back(2);
   vec.push_back(1);
   vec.push_back(3);
   vec.push_back(4);
   vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(8);
//    vec.push_back(9);
//    vec.push_back(7);
//    vec.push_back(1);
   int ans = findDuplicateElement(vec);
   cout<<"Duplicate Element is => "<<ans<<endl;
   return 0;
}