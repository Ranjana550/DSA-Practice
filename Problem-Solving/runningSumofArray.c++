/**
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,1,1,1,1,1};
    vector<int> runningSum(nums.size());
    runningSum[0]=nums[0];
    for(int i=1; i<nums.size(); i++){
            runningSum[i]= runningSum[i-1]+nums[i];
        }
    for(int j=0; j<runningSum.size(); j++){
        cout<<runningSum[j]<<" ";
    }


}