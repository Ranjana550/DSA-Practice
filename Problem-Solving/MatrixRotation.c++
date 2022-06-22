/***
Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat 
in 90-degree increments, or false otherwise.

Example 1:
Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.
**/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}};
    vector<vector<int>> t = {{1,1,1},{0,1,0},{0,0,0}};

    int n = mat.size();
        int l=4;
        while(l--){
            if(mat==t)
                cout<< "true";
            else{
                for(int i=0;i<n;i++){
                    for(int j=0;j<i;j++)
                        swap(mat[i][j],mat[j][i]);
                }
                for(int i=0;i<n;i++)
                    reverse(mat[i].begin(),mat[i].end());
            }
         }
		
       cout<< "false";
    
       
}