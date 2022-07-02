/**
Let's call an array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

Example 1:
Input: arr = [0,1,0]
Output: 1
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int peakIndexInMountainArray(vector<int>& a) {
        return max_element(a.begin(),a.end())-a.begin();
        
    }
    int main(){
        vector<int>arr = {0,1,0};
        int result = peakIndexInMountainArray(arr);
        cout<<result;
        return 0;
    }