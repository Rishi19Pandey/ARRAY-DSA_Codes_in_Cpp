#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[5] = {12,3,21,9,1};
    int B[5] = {5, 4 ,3,2,8};
    vector<pair<int,int>> vp;
    int i;
    for(i = 0; i < 5; i++){
        vp.push_back({A[i],B[i]});
    }
    sort(vp.begin(),vp.end());
    for(i = 0; i < vp.size();i++){
        cout<<vp[i].first<<" -> "<<vp[i].second<<endl;
    }
    return 0;
}