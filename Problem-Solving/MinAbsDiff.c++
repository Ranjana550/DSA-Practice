/***
You are given two positive integer arrays nums1 and nums2, both of length n.
The absolute sum difference of arrays nums1 and nums2 is defined as the sum of |nums1[i] - nums2[i]| for each 0 <= i < n (0-indexed).
You can replace at most one element of nums1 with any other element in nums1 to minimize the absolute sum difference.
Return the minimum absolute sum difference after replacing at most one element in the array nums1. Since the answer may be large, return it modulo 109 + 7.
|x| is defined as:
x if x >= 0, or
-x if x < 0.
Example 1:
Input: nums1 = [1,7,5], nums2 = [2,3,5]
Output: 3
Explanation: There are two possible optimal solutions:
- Replace the second element with the first: [1,7,5] => [1,1,5], or
- Replace the second element with the third: [1,7,5] => [1,5,5].
Both will yield an absolute sum difference of |1-2| + (|1-3| or |5-3|) + |5-5| = 3.
**/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int mod = 1e9 + 7;

    int minAbsoluteSumDiff(vector<int>nums1, vector<int>nums2) {
        vector<int> v(nums1);
        sort(v.begin(),v.end());
        int n = nums1.size();
        long long ans = 0;
        int opt = 0;
        int temp;
        for(int i=0; i<n; i++){
            ans += abs(nums1[i] - nums2[i]);
            int it = lower_bound(v.begin(),v.end(), nums2[i]) - v.begin();
            if(it==0) temp = v[it];
            else if(it==n) temp = v[n-1];
            else{
                if(abs(nums2[i] - v[it]) > abs(nums2[i] - v[it-1])) temp = v[it-1];
                else temp = v[it];
            }
            
            opt = max(opt,abs(nums2[i] - nums1[i]) - abs(nums2[i] - temp));
              
        }
        
        return (ans - opt)%mod;
    }
int main(){
    vector<int>nums1 = {1,7,5};
    vector<int>nums2 = {2,3,5};
    cout<<minAbsoluteSumDiff(nums1, nums2);

}