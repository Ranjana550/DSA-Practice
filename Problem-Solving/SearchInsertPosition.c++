/**
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
 */
int searchInsert(vector<int>&nums, int target) {
        
        int start=0;
    int end=nums.size()-1;
        while(start<=end){
        int mid = start+ (end - start)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            start=mid+1;
         
        }else{
            end=mid-1;
            
        }
    }
        return start;
    }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,3,5,6};
    int target=5;
    int res =  searchInsert(nums, target);
    return 0;
}