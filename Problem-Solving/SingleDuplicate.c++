/**
/***
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>nums) {      
        int low = 1, high = nums.size() - 1, cnt;
        
        while(low <=  high)
        {
            int mid = low + (high - low) / 2;
            cnt = 0;
            for(int n : nums)
            {
                if(n <= mid)
                    ++cnt;
            }
         
            if(cnt <= mid)
                low = mid + 1;
            else
                high = mid - 1;
            
        }
        return low;
        
    }
};
int main(){
    vector<int>nums = {1,3,4,2,2};
    Solution s1;
    cout<<s1.findDuplicate(nums);
    

}