/***
 Given an array nums of integers, return how many of them contain an even number of digits.

Example 1:
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
 ***/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {12,345,2,6,7896};
     vector<int> dig(nums.size());
        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            int len = str.size();
            dig[i]=len;
        }
        int cnt=0;
        for(int j=0; j<dig.size();j++){
            if(dig[j]%2==0){
                cnt++;
            }
        }
        cout<< cnt;
}