/***
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
 ***/
#include<iostream>
using namespace std;
//Aproach 1 - simple sum of n numbers formula
int MissingNumber(int nums[], int len) {
        int target = (len+1)*(len+2)/2;
        int sum=0;
        for(int i=0; i<len; i++){
            sum = sum + nums[i];
        }
        int result = target - sum;
        return result;
        
    }
int main(){
     int nums[]={3,6,1,5,4}; 
    int len= sizeof(nums)/sizeof(nums[0]);
     int result = MissingNumber(nums, len);
     cout<<"Missing number is :"<<result;

}
//Aproach 2 - Using Cycle Sort
/***
 int swap(int arr[], int first, int second){
    int temp  = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}
//Used in the cases for numbers are given in the range like 1 to n and asked to swap them.
int CycleSort(int arr[], int size){
    int i=0;
    while(i<size){
        int correct = arr[i]-1;
        if(arr[i]!=arr[correct]){
            swap(arr, i, correct);
        }else{
            i++;
        }
    }
}

//Now, check if element at index i is equal to i (since array is from 0 to n), if not then return that index value.
for(int index =0; index<len; i++ {
    if(nums[index]!=index){
        return index;
    }
})
 ***/