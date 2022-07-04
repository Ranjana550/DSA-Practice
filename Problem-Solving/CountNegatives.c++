/***
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.
Example 1:
Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
***/
/****
 *Aproach 1 : Using brute-force/naive method
 We can go through each and every cell of the given matrix to find the count of negative elements. 
 This is the simplest yet the worst solution with respect to time complexity. Using this approach, 
 we can solve this problem even if the matrix is not sorted.
 Aproach 2 : Using naive but little optimization
 Here, once we come across a negative element, we stop searching in that row and skip to the next row as all the elements 
 after that specific element should also be negative (since the matrix is sorted). But here, the worst-case complexity still 
 remains quadratic.
Aproach 3 : Using binary search
We iterate through each row.
For every row, we perform binary search,
If the middle element is positive, we shift towards the right
If the middle element is negative, we shift towards the left
At the end of the binary search we find the index of the first negative element of a row.
We return the count of negative elements using count = c - j.
***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> grid ={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
      int k=0,count=0;
        while(k < grid.size()){
            int i=0,j=grid[k].size()-1;
            while(i<=j){
                int m = (i+j)/2;
                if(grid[k][m]<0){
                    j=m-1;
                }
                else{
                    i=m+1;
                }
            }
            count+= (grid[k].size()-i);
            k++;
        }
        cout<<count;

}