#include<iostream>
using namespace std;

int swap(int arr[], int first, int second){
    int temp  = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}
//Insertion sort method
int InsertionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr, j, j-1);
            }else{
                break;
            }
        }
    }
}
int main(){
    int arr[]={3,4,5,1,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
}