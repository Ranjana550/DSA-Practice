/***
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

 ***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
unordered_map<int ,int>mp;
vector<int>ans;
set<int>s;
for(auto it:nums1)mp[it]++;
for(auto it:nums2){
if(mp[it]>0)s.emplace(it);
mp[it]--;
}
for(auto it:s)ans.emplace_back(it);
return ans;
}

int main(){
    vector<int>nums1 = {1,2,2,1}; 
    vector<int>nums2 = {2,2};
    

}