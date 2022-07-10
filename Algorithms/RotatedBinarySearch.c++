/***
 Search if element is present in rotated binary tree.
 ***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>arr, int target, int s, int e) {
        if (s > e) {
            return -1;
        }

        int m = s + (e-s) / 2;
        if (arr[m] == target) {
            return m;
        }

        if (arr[s] <= arr[m]) {
            if (target >= arr[s] && target <= arr[m]) {
                return search(arr, target, s, m-1);
            } else {
                return search(arr, target, m+1, e);
            }
        }

        if (target >= arr[m] && target <= arr[e]) {
            return search(arr, target, m+1, e);
        }

        return search(arr, target, s, m-1);
    }

int main(){
    vector<int> arr={5, 6, 7, 8, 9, 1, 2, 3};
    
   cout<<search(arr, 8, 0, arr.size()-1);
}