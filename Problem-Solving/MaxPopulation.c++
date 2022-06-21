/*
You are given a 2D integer array logs where each logs[i] = [birthi, deathi] indicates the birth and death years of the ith person.
The population of some year x is the number of people alive during that year. The ith person is counted in year x's population if x is in the inclusive range [birthi, deathi - 1]. Note that the person is not counted in the year that they die.
Return the earliest year with the maximum population.

Example 1:
Input: logs = [[1993,1999],[2000,2010]]
Output: 1993
Explanation: The maximum population is 1, and 1993 is the earliest year with this population.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> logs = {{1993,1999},{2000,2010}};
    vector<int> ans(101);
        for(int i=0; i<logs.size();  i++){
            for(int j=logs[i][0]; j<logs[i][1]; j++){
                ans[j-1950]++;
            }
        }
        
        int result = 0;
        int maxyear=1950;
        for(int i=0; i<101; i++){
            if(result<ans[i]){
                result = ans[i];
                maxyear = i+1950;
            }  
        }
        cout<< maxyear;
}