#include<iostream>
using namespace std;
//aproach 1 = reverse string and check if reversed string and original strings are equal
    //aproach 2 = using two pointer

bool IsPalindrome(string str){

    char start = 0;
    char end = str.length()-1;
    while(start<end){
        if(str[start]!=str[end]){
            return false;
            
        }
        start++;
        end--;
    }
    return true;

}
int main(){
    string name1 = "BusyBee";
    string name2 = "abcba";
    
    if (IsPalindrome(name1)) {
        cout << "Palindrome"<<endl;
    }
    else {
        cout << "Not Palindrome"<<endl;
    }

    if (IsPalindrome(name2)) {
        cout << "Palindrome"<<endl;
    }
    else {
        cout << "Not Palindrome"<<endl;
    }
    
}
