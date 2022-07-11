/***
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
Given the sorted rotated array nums of unique elements, return the minimum element of this array.
You must write an algorithm that runs in O(log n) time.

Example 1:
Input: nums = [3,4,5,1,2] target =  4
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int searchrotatepoint(vector<int> nums){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>nums[i+1])
        return i;
    }

}

int main(){
    vector<int>nums = {3,4,5,1,2};
    int point = searchrotatepoint(nums);
    cout<<point;
    cout<<endl;
    vector<int>nums1;
    for(int i=0; i<=point; i++){
        nums1.push_back(nums[i]);
    }
    for(int i=0; i<nums1.size(); i++){
        cout<<nums1[i];
    }
    cout<<endl;

    vector<int>nums2;
    for(int i=point+1; i<nums.size(); i++){
        nums2.push_back(nums[i]);
    }
    
    for(int i=0; i<nums2.size(); i++){
        cout<<nums2[i];
    }
       cout<<endl;
    cout<<nums[point +1];
 
    
}