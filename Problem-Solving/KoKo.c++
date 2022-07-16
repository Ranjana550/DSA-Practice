/****
 * ***/
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