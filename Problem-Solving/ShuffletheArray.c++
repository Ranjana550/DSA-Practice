/***
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn]. Return the array in the form [x1,y1,x2,y2,...,xn,yn].
Example 1:
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
Explanation: Since x1=2, x2=5, x3=1, y1=3, y2=4, y3=7 then the answer is [2,3,5,4,1,7].
 **/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;
    vector<int> shuffle;
    int j=n;

    for(int i=0; i<n; i++){
        shuffle.push_back(nums[i]);
        shuffle.push_back(nums[j]);
        j++;

    }
    for(int i=0; i<shuffle.size(); i++){
        cout<<shuffle[i]<<" ";
    }


}