/***
Check if number is present in an array or not 
 ***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool LSwithRecursion(vector<int>nums, int target, int index){
     if(index==nums.size()-1){
        return false;

     }else{
        return nums[index]==target || LSwithRecursion(nums, target, index+1);
     }
}
int main(){
    vector<int> nums={1,4,7,8,9};
    int target = 4;
    cout<<LSwithRecursion(nums, target, 0);
}

