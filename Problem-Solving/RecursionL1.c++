/**
 1. factorial
 2. reverse
 3. sum of n numbers
 4. product of 1 to n
 5. sum of digita
 6. product of digits
 7. palindrome
 8. count zeros
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int factorial1(int num){
    int fact=1;
    while(num>=1){
      fact = fact*num;
      num=num-1;
    }
}
int factorial2(int num){
    if(num==0){
        return 1;
    }
    return num*factorial2(num-1);
}

int main(){
    int fact1 = factorial1(5);
    cout<<fact1<<endl;
     int fact2 = factorial2(5);
     cout<<fact2<<endl;
    //reverse(1234);
    //sumofnnumbers(5);
    //productofnnumbers(5);
    //palindorme(1234321);
    //countzeros(10040);

}