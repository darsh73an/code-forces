#include<iostream>
using namespace std;

int main(){
    int n, count = 0; // size of string and count is number of removals
    string s;       // input
    cin >> n >> s;  // n is size of string
    
    for(int i=0; i<n-1; i++){ // n-1 bcoz of i == i++1 cmp
        if(s[i] == s[i+1]){
            count++;
        }
    }
