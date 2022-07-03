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
int reverse1(int num){
    int rem=0;
    int rev_num = 0;
    while(num!=0){
        rem = num%10;
        rev_num = rev_num*10+rem;
        num=num/10; 
    }
    return rev_num;
   
}
int reverse2(int num){
  
    while(num!=0){
         int rem=0;
        rem = num%10;
        num=num/10;
        cout<<rem;
    }
}
int reverse3(int num){
    static int rev_num = 0;
    static int base_pos = 1;
    if (num > 0) {
        reverse3(num / 10);
        rev_num += (num % 10) * base_pos;
        base_pos *= 10;
    }
    return rev_num;
}
int reverse4(int num){
    string strin = to_string(num);
    reverse(strin.begin(), strin.end());
    num = stoi(strin);
    return num;
}

int main(){
    int fact1 = factorial1(5); //using while
    cout<<fact1<<endl;
     int fact2 = factorial2(5); //using recursion
     cout<<fact2<<endl;
    int rev1 = reverse1(1234); //using while
    cout<<rev1<<endl;
    reverse2(1234); //using simple print in reverse(rem)
    cout<<endl;    
    int rev3 = reverse3(1234); //using recursion
    cout<<rev3<<endl;
    int rev4 = reverse4(1234); //using in buit string functions
    cout<<rev4<<endl;

    //sumofnnumbers(5);
    //productofnnumbers(5);
    //palindorme(1234321);
    //countzeros(10040);

}