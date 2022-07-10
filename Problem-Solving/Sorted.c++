/***
Check if given array is sorted or not.
***/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool checksorted(vector<int>nums, int index){
    if(index==nums.size()-1){
        return true;
    }else{
        return nums[index]<nums[index+1] && checksorted(nums, index+1);
    }

}
int main(){
    vector<int> nums={1,5,4,7,8,9,};
    /*** Aproach 1 :
    int flag=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>nums[i+1]){
            flag=0;
            break;
        }else{
            flag=1;
        }
        
    }
    if(flag==0){
      cout<<"NO";
    }else{
        cout<<"YES";
    }
    ***/
   //Aproach 2: Recursion
   cout<<checksorted(nums, 0);



}