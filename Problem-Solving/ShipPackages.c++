/****
A conveyor belt has packages that must be shipped from one port to another within days days.
The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.
Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.
****/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    #define ll long long
        vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-3; i++) {
            if(i==0 || nums[i]!=nums[i-1]) {
                for(int j=i+1; j<n-2; j++) {
                    if(j == i+1 || nums[j]!=nums[j-1]) {
                        twoSum(i, j, target, nums, res, j + 1);
                    }
                }
            }
        }
        return res;
    }
    
    void twoSum(int x, int y, ll target, vector<int> &nums, vector<vector<int>> &res, int idx) {
        int i = idx, j = nums.size()-1; ll need = target - nums[x] - nums[y];
        while(i < j) {
            ll sum = nums[i] + nums[j];
            if(sum == need) {
                res.push_back({nums[x], nums[y], nums[i], nums[j]});
                i++;
                while(i<j && nums[i] == nums[i-1]) i++;
            } else if(sum < need) i++;
            else j--;
        }
    }
};

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    Solution s1;
    s1.fourSum(nums, target);

}