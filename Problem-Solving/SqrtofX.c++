/****
Given a non-negative integer x, compute and return the square root of x.
Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.
Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.

Example 1:
Input: x = 4
Output: 2
****/
/**
Aproach 1: Using linear search
y <= sqrt(x)
y^2 <= x
for any y*y x should be grater. 
so we run while loop 
(y*y<=x){
    y++;
} 
return y-1;

Aproach 2: Using Binary search (reducing search space)

***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=8;
    long long int start = 0;
        long long int end = n;
        long long int mid = (start+end)/2;
        
        while(start<= end){
            if(mid*mid == n){
                cout<< mid;
            }
            else if(mid*mid < n){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = (start+end)/2;
        }
        
        cout<< mid;
          
}