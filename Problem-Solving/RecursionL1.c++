/**
 1. Factorial of a number
 2. Reverse
 3. Sum of Digits of a number
 4. Product of digit of a number
 5. palindrome
 6. count zeros
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
int sumofnnumbers1(int num){
    int sum=0;
    int rem=0;
     if(num==0){
        return 0;
    }
    while(num>0){
    rem = num%10;
    num=num/10;
    sum = sum + rem;
    }
    return sum;

}
int sumofnnumbers2(int num){
    if(num==0){
        return 0;
    }
    return num%10 + sumofnnumbers2(num/10);

}
int productofnnumbers1(int num){
     int prod=1;
    int rem=0;
     if(num==0){
        return 0;
    }
    while(num>0){
    rem = num%10;
    num=num/10;
    prod = prod * rem;
    }
    return prod;

}
int productofnnumbers2(int num){
    if(num==0){
        return 1;
    }
    return num%10 * productofnnumbers2(num/10);

}
bool palindrome1(int num){
 return num == reverse1(num);
}
int countzeros1(int num){
    int rem=0;
    int cnt = 0;
    while(num!=0){
        rem = num%10;
        num=num/10;
        if(rem == 0){
            cnt++;
        } 
        
    }
    return cnt;  
}
int countzeros2(int num){
   static int count=0;
    if(num>0)
    {

        if(num%10==0)
        count++;

        countzeros2(num/10);
    }
    return count;
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
    int rev3 = reverse3(12321); //using recursion
    cout<<rev3<<endl;
    int rev4 = reverse4(1234); //using in buit string functions
    cout<<rev4<<endl;
    int sum1 = sumofnnumbers1(5321); //using while
    cout<<sum1<<endl;
    int sum2 = sumofnnumbers2(5321); //using recursion
    cout<<sum2<<endl;
    int prod1 = productofnnumbers1(55); //using while
    cout<<prod1<<endl;
    int prod2 = productofnnumbers2(55); //using recursion
    cout<<prod2<<endl;
    cout<<palindrome1(12321)<<endl; //using simple recursion - checked originum and revnum are same or not
    int cnt1 = countzeros1(10040);  //using while
    cout<<cnt1<<endl;
    int cnt2 = countzeros2(10040);  //using recursion
    cout<<cnt2<<endl;

}