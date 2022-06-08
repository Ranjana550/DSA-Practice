#include <iostream>
using namespace std;
int swap(int arr[], int first, int second){
    int temp  = arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
}
int GetMaxIndex(int arr[], int startindex, int lastindex){
    int max=startindex;
    for(int i=startindex; i<=lastindex; i++){
        if(arr[max]<arr[i]){
            max=i;
        }
    }
    return max;
}

int SelectionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int startindex = 0;
        int lastindex = size-i-1;
        int maxindex = GetMaxIndex(arr, startindex, lastindex);
        swap(arr, lastindex, maxindex);

    }
}

int main(){
    int arr[] ={5,4,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<",";
    }
    }
