/****
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
**/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {5,7,7,8,8,8,10}; 
    
    int target = 8;
    int start=-1;
        int end = -1;
        int i=0;
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && start==-1){
                start=i;
            }
            if(nums[i]==target){
                end=i;
            }
        }
        vector<int> vt;
        vt.push_back(start);
        vt.push_back(end);
        for(int i=0; i<vt.size(); i++){
            cout<<vt[i]<<" ";
        }
        


}