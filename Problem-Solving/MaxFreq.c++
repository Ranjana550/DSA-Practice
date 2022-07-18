/***
The frequency of an element is the number of times it occurs in an array.
You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.
Return the maximum possible frequency of an element after performing at most k operations.
Example 1:
Input: nums = [1,2,4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
4 has a frequency of 3.
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int> nums, int k) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        int n = nums.size(), ans = 0, i, j = -1;

        for (i = 0; i < n; i++)
        {
            j = max(j, i);

            while (j < n && (nums[i] - nums[j]) <= k)
            {
                k -= (nums[i] - nums[j]);
                j++;
            }
            
            ans = max(ans, j - i);
            if (j >= n)
                break;
            
            if (j > i && i + 1 != n)
            {
                k += (j - i - 1) * (nums[i] - nums[i + 1]);
            }
        }

        return ans;
    }
    int main(){
        vector<int>nums = {1,2,4};
        int k = 5;
        cout<<maxFrequency(nums, k);

    }