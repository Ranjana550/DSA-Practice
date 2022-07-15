/****
You are given three positive integers: n, index, and maxSum. You want to construct an array nums (0-indexed) that satisfies the following conditions:
nums.length == n
nums[i] is a positive integer where 0 <= i < n.
abs(nums[i] - nums[i+1]) <= 1 where 0 <= i < n-1.
The sum of all the elements of nums does not exceed maxSum.
nums[index] is maximized.
Return nums[index] of the constructed array.
Note that abs(x) equals x if x >= 0, and -x otherwise.
****/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        int maxValue(int n, int i, int maxSum) {
        int left = 1, right = maxSum, r=1;
		
        while(left<=right)
        {
            int mid = (left+right)/2;
            
            if(test(n,i,maxSum,mid)) {
                r=mid;
                left = mid+1;
            }
            else right = mid-1;
        }
        
        return r;
    }
    
    bool test(int n, int i, double maxSum, double x)
    {
        double leftSum= (x<i+1)?(1+x)*x/2 + (i-x+1) : (x + x-i)*(i+1)/2;
        double rightSum= (x<n-i-1+1)? (1+x)*x/2 + (n-i-x) -x : (x + x-(n-i-1))*(n-i)/2 -x;

        return leftSum+rightSum<=maxSum;
    }
};
int main(){

}