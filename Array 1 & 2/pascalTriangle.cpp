#include<bits/stdc++.h>
using namespace std;

// Create row of Pascal Triangle

  vector<int> generateRow(int num){
        long long ans = 1;
        vector<int> rowAns;
        rowAns.push_back(1);
        for(int i = 1 ; i< num ; i++){
            ans = ans * (num - i);
            ans = ans / i;
            rowAns.push_back(ans);
        }
        return rowAns;
    }

// Whole Pascal Triangle

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i = 1 ; i <= numRows ; i++){
            answer.push_back(generateRow(i));
        }
        return answer;
    }

int main(){
    vector<vector<int>> pascaltriangle;
    long long row;
    cout<<"Enter Row => ";
    cin>>row;
   pascaltriangle = generate(row);
   
   // Print Pascal Triangle

    for (int i = 0; i < pascaltriangle.size(); i++) {
        for (int j = 0; j < pascaltriangle[i].size(); j++)
            cout << pascaltriangle[i][j] << " ";
        cout << endl;
    }
   return 0;
}