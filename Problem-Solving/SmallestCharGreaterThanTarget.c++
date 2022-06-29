/**
Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.
Note that the letters wrap around.
For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
Example 1:
Input: letters = ["c","f","j"], target = "a"
Output: "c"
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char nextGreatestLetter(vector<char>& letters, char target) {
          int n= letters.size();
    if(target>=letters[n-1]) 
        return letters[0];
   
    int l = 0, r = letters.size() - 1;
    int ans = -1;
    while (l <= r) {
 
        int mid = (l + r) / 2;
        if (letters[mid] > target)
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
 

    return letters[ans];
        
    }
    int main(){
    vector<char> letters{ 'A', 'K', 'S' };
    char target= 'L';
 
    
    char result = nextGreatestLetter(letters, target);
    cout << result << endl;
    return 0;

    }