// Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

// For example, given the following triangle

// [
//      [2],
//     [3,4],
//    [6,5,7],
//   [4,1,8,3]
// ]
// The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).
#include <iostream>
#include<algorithm>
#include<stack>
#include<vector>
#include<map>
#include<set>

using namespace std;

int main(){
   
   system("pause");
   return 0;
}

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int cow=triangle.size();
        int col=triangle[0].size();
        int dp[cow][col] ={0};
    }
};