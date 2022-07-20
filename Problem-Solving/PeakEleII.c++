/**
A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.

Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].

You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.

You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.
 */
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
   vector<int> findPeakGrid(vector<vector<int>> mat) {
        int m = mat.size(), n = mat[0].size(); 
        int l = 0, h = m - 1;
        while (l <= h) {
            int midR = l + (h - l) /  2;
            int maxCIdx = max_element(mat[midR].begin(), mat[midR].end()) - mat[midR].begin();
            if (midR < m - 1 && mat[midR][maxCIdx] < mat[midR + 1][maxCIdx])
                l = midR + 1;
            else if (midR > 0 && mat[midR][maxCIdx] < mat[midR - 1][maxCIdx])
                h = midR - 1;
            else
                return {midR, maxCIdx};
        }
        return {-1, -1};
    }
};
int main(){
    vector<vector<int>> mat = {{1,4},{3,2}};
    Solution s1;
    cout<<s1.findPeakGrid(mat);

}