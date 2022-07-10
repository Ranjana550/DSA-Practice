/***
Check if number is present in an array or not 
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
    else{
        return findindex(nums, target, index+1, ans);
    }  

}
int main(){
    vector<int> nums={1,4,7,8,8,8,9};
    vector<int> ans;
    int target = 8;
   vector<int>res;
   res=findindex(nums, 8, 0, ans);
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<",";
   }
   
    
}

