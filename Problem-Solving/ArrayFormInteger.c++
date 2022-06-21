/**
For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

Example 1:
nput: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
  
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> num = {1,2,0,0};
int k = 34;
     int carry = k;
        for (int i = num.size() - 1; i >= 0 && carry > 0; i--) {
            int a = num[i] + carry;
            num[i] = a % 10 ;
            carry = a / 10;
        }

        while ( carry > 0 ) {
            num.insert(num.begin(), carry%10);
            carry /= 10;
        }

        
        for(int j=0; j<num.size();j++){
          cout<<num[j]<<" ";
        }
       
}