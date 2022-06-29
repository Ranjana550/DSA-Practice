/****
Given a positive integer num, write a function which returns True if num is a perfect square else False.
Follow up: Do not use any built-in library function such as sqrt.

Example 1:
Input: num = 16
Output: true
***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   bool isPerfectSquare(int num) {
        long long int start = 0;
        long long int end = num;
        long long int mid = (start+end)/2;
        
        while(start<= end){
            if(mid*mid == num){
                return 1;
            }
            else if(mid*mid < num){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        return 0;
    }
int main(){
    int res1 = isPerfectSquare(16);
    cout<<res1<<endl;
    int res2 = isPerfectSquare(7);
    cout<<res2;
    return 0;
}