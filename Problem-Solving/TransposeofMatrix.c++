/**
Given a 2D integer array matrix, return the transpose of matrix.
The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
 */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int ans[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            ans[i][j]=matrix[j][i];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}