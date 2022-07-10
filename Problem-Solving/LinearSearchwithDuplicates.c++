/***
Find all duplicates
 ***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>findindex(vector<int>nums, int target, int index, vector<int>ans){
    
     if(index==nums.size()){
        return ans;
     }
     if(nums[index]==target){
        ans.push_back(index);
        }
    
        return findindex(nums, target, index+1, ans);
      

}
int main(){
    vector<int> nums={1,4,8,7,6,7,8,9};
    vector<int> ans;
    int target = 8;
   vector<int>res= findindex(nums, target, 0, ans);
   
   for(int i=0; i<res.size(); i++){
    cout<<res[i]<<" ";
   }
    
}

