/***
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
More formally check if there exists two indices i and j such that :
Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
**/
/***
Brute Force Aproach =  Run two for loops and check whether arr[i] is double of arr[j] or arr[i] is half od arr[j]
Optimised aproach = for searching use binary search
more optimised = use sets
 **/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int NandDouble(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
            auto it = find(arr.begin(), arr.end(), arr[i]*2);
            if(it != arr.end() && it != arr.begin()+i){
                return 1;
            }
        }
        return 0;

}
int main(){
    vector<int>arr = {11,2,5,3};
    
     int n = NandDouble(arr);
     cout<<n;
}