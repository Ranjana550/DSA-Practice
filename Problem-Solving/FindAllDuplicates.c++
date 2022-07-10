/****
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
Example 1:
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,4,7,4,8,8,8,9};
    vector<int> ans;
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==nums[i+1]){
            ans.push_back(nums[i]);
        }
      
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}