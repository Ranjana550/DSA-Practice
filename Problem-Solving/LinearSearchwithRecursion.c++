/***
Check if number is present in an array or not 
 ***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//return strue or false
bool LSwithRecursion(vector<int>nums, int target, int index){
     if(index==nums.size()){
        return false;

     }else{
        return nums[index]==target || LSwithRecursion(nums, target, index+1);
     }
}
//return index
int findindex(vector<int>nums, int target, int index){
    
     if(index==nums.size()){
        return -1;
     }
     if(nums[index]==target){
        return index;
        }
    else{
        return findindex(nums, target, index+1);
     }

     

}
int main(){
    vector<int> nums={1,4,7,8,8,8,9};
    int target = 8;
    cout<<LSwithRecursion(nums, target, 0)<<endl;
    cout<<findindex(nums, target, 0);
    
}

