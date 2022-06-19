/**
 A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
 **/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPangram(string str){
    vector<int> soln(26, 0);
    int idx;
    for(int i=0; i<str.length(); i++){
        if('A'<=str[i] && 'Z'>=str[i]){
            idx= str[i] - 'A';

        }
        else if('a'<=str[i] && 'z'>=str[i]){
            idx= str[i] - 'a';
        }
        else{
            continue;
        }
        soln[idx]=true;

    }
    
    for(int k=0; k<soln.size(); k++){
        if(soln[k]==false){
            return false;

        }
        return true;
    }


}
int main(){
    string str = "Leetcode" ;
    if (checkPangram(str) == true)
        cout<<"true";
    else
        cout<<"false";
    
}