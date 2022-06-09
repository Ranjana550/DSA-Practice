#include<iostream>
using namespace std;
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
int main(){
    int arr[]={3,5,2,1,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    CycleSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
}