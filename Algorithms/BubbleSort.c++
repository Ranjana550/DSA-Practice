#include <iostream>
using namespace std;
void BubbleSort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=1; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }

    }
}
void swap(int one, int two){
    int temp;
    temp=one;
    one=two;
    two=temp;
}
int main(){
    int arr[] ={1,3,5,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"UnSorted array is:";
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    BubbleSort(arr, size);
    cout<<"\nSorted array is:";
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
}