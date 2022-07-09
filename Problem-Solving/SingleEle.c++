/***
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.
Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
 ***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums)
{
         int n=nums.size();
        int i=0,j=n-1;
        
        while(i<j){
            int mid=(i+j)>>1;
            
            int temp;
            if(mid%2==0){
                temp=mid+1;
                
            }
            else{
                temp=mid-1;
            }
            if(nums[temp]!=nums[mid]){
                j=min(mid,temp);
                
            }
            else{
                i=max(mid,temp)+1;
                
                
            }
            
            
            
        }
        return nums[i];
}
          
int main(){
    vector<int>nums = {2,5,6,0,0,1,2};
    int res = singleNonDuplicate(nums);
    cout<<res;

}