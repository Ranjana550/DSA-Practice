/***
 Problem Statement - 
 Given a zero-based permutation nums (0-indexed), build an array ans of the same length where 
 ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
 ***/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums ={0,2,1,5,3,4};
    vector<int> ans;
    ans=nums;
    for(int i=0; i<nums.size(); i++){
        ans[i] = nums[nums[i]];
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}