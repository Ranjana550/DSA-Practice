/***
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.

Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
 ****/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        if(x < 0) return false;
        
        int temp = x;
        long reverse = temp%10;
        temp = x / 10;
        
        while (temp) {
            reverse = (10 * reverse) + (temp % 10);
                temp = temp/10;
        }
        return (x == reverse); 
        
    }
int main(){
   
    isPalindrome(121);
    isPalindrome(123);


       
}