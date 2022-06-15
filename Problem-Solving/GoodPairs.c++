/**
 Given an array of integers nums, return the number of good pairs. A pair (i, j) is called good if nums[i] == nums[j] and i < j.
 Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
**/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,1};
    int ans=0;
    for(int i=0; i<nums.size()-1; i++){
        for(int j=nums.size()-1; j>i; j--){
            if(nums[i]==nums[j]){
                ans++;
            }
        }
        
    }
    cout<<ans;

}