/***
Binary search in 2D array.
***/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>> matrix, int target) {
int m = matrix.size();
int n = matrix[0].size();
int i=0;
int j=n-1;
while(i<m && j>=0){
if(matrix[i][j]==target){
return true;
}
else if(matrix[i][j]<target){
i++;
}
else{
j--;
}
}
return false;
}
    
};
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    Solution s1;
    cout<<s1.searchMatrix(matrix, target);

}
