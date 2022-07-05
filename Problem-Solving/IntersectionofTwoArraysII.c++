/***
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
**/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]>nums2[j]){
                    j++;
                }
                else
                    i++;
        }
        return ans;
        
    }
int main(){
    vector<int>nums1 = {1,2,2,1}; 
    vector<int>nums2 = {2,2};
    vector<int>nums3 = intersect(nums1, nums2);
    for(int i=0; i<nums3.size(); i++){
        cout<<nums3[i]<<",";
    }
}