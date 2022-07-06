/***
You are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.
Notice that x does not have to be an element in nums.
Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.
Example 1:
Input: nums = [3,5]
Output: 2
Explanation: There are 2 values (3 and 5) that are greater than or equal to 2.
 **/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {3,5};
  for(int i = 1 ; i <= nums.size() ; ++i )
  {
            int idx = lower_bound(begin(nums),end(nums),i) - begin(nums);
            if(i == nums.size() - idx){
            cout<<i;
            }else{
                cout<<"-1";
            }
            
        }
        
        return 0;
}