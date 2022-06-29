/**
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.

Example 1:
Input: n = 5
Output: 2
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arrangeCoins(int n) {
        int count=1;
        if(n<=0){
            return 0;
        }
        while(n>0){
           n=n-count;
             if(n<0){
                 break;
             }
            count++;
        }
        return count-1;
        
        
    }
int main(){
int res = arrangeCoins(5);
cout<<res;
return 0;
}