/**

  
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int func(int num, int cnt){
        
        if(num==0){
            return cnt;
        }
        
        if(num%2==0){
            return func(num/2, cnt+1);
        }
        return func(num-1, cnt+1);   
        }
int numberOfSteps(int num) {
        return func(num, 0);
    }
    
    
int main(){
    int result = numberOfSteps(14);
    cout<<result;

}