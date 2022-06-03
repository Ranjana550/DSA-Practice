#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int target){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid = start+(end - start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid] < target){
            start=mid+1;
         
        }else{
            end=mid-1;
            
        }
    }
    return -1;

}
int main(){
    int target = 1;
    int arr[] = {1,4,6,11,13,19,21};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = BinarySearch(arr, size, target);
    cout<<"Number found at index : "<<result;
    if (result==-1){
        cout<<"Number not found!";
    }
   
    
}