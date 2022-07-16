/****
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.
Example 1:
Input: piles = [3,6,7,11], h = 8
Output: 4
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int> piles, int h,int mid){
        long long int s=0;
        for(int i=0;i<piles.size();i++)
            piles[i]=ceil((double)piles[i]/mid);
         for(int i=0;i<piles.size();i++)
             s=s+piles[i];
        if(s<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=1e9,ans;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(piles,h,mid)){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        return ans;
    }
int main(){

}