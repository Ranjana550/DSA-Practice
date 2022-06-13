/***
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
***/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    vector<int>vec;
        for(int i=0; i<accounts.size(); i++){
            int sum=0;
            for(int j=0; j<accounts[i].size(); j++){
                sum=sum+accounts[i][j];
            }
            vec.push_back(sum);
        }
        int result = *max_element(vec.begin(), vec.end());
        cout<<result;


}