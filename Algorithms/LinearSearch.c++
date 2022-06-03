#include <iostream>
using namespace std;
int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }

}
int main(){
    int target = 11;
    int arr[] = {1,4,6,11,13,19,21};
    int size = sizeof(arr);
    int result = LinearSearch(arr, size, target);
    cout<<"Number found at index : "<<result;
}