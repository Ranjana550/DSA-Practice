/***
We are playing the Guess Game. The game is as follows:
I pick a number from 1 to n. You have to guess which number I picked.
Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.
You call a pre-defined API int guess(int num), which returns three possible results:
-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.

Example 1:
Input: n = 10, pick = 6
Output: 6
 ****/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int guess(int num, int pick){
    if(num==pick){
        return 0;
    }else if(num>pick){
        return 1;

    }else{
        return -1;

    }
}
int main(){
    int n=10;
    int pick=6;
     long i = 1;
        while(i<=n){
            int find = (i+n)/2;
            if(guess(find, pick) == 0){
                cout<< "find";
            }
            else if(guess(find, pick) == -1){
                n = find - 1;
            }
            else{
                i = find + 1;
            }
        }
        cout<<"-1";
}