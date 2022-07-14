/***
The Merge Sort algorithm is a sorting algorithm that is considered as an example of the divide and conquer strategy. 
So, in this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner. 
We can think of it as a recursive algorithm that continuously splits the array in half until it cannot be further divided.
**/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergearrays(int arr[], int low, int mid, int high){
    int n1= mid-low+1;
    int n2 = high  - mid;
    int left[n1];
    int right[n2];

for (int i = 0; i < n1; i++)
    left[i] = arr[low + i];

  for (int j = 0; j < n2; j++)
    right[j] = arr[mid + 1 + j];

    int i=0;
    int j=0;
    int k=low;
    while (i < n1 && j < n2) {
            if (left[i] < right[j]) {
                arr[k] = arr[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }

        // it may be possible that one of the arrays is not complete
        // copy the remaining elements
        while (i < n1) {
            arr[k] = left[i];
            i++;
            k++;
        }

        while (j < n2) {
            arr[k] = right[j];
            j++;
            k++;
        }


}
void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid  = low + (high-low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    mergearrays(arr, low, mid, high);
    }
}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
int main(){
    int arr[] ={5,4,3,2,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);

}