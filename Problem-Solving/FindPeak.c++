/**
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.
Example 1:
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findpeakaproach1(vector<int>nums){
    if(nums[0]>nums[1]){
        return 0;
    }else if(nums[nums.size()-1]>nums[nums.size()-2]){
        return nums.size()-1;
    }else{
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
                return i;
            }
        }
    }
}
int findpeakaproach2(vector<int>nums){
    int low = 0, high = nums.size() - 1;
        int mid;
        int n = nums.size();
        if(nums[0]>nums[1]){
        return 0;
    }
    if(nums[nums.size()-1]>nums[nums.size()-2]){
        return nums.size()-1;
    }
    while(low<=high){
        mid = low + (high-low)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            return mid;
        }else if(nums[mid-1]>nums[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

}
int main(){
    vector<int>nums = {1,2,1,3,5,6,4};
    cout<<findpeakaproach1(nums);
    cout<<endl;
    cout<<findpeakaproach2(nums);

}