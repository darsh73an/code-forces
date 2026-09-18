#include<iostream>
using namespace std;

bool lucky(int x){
    while(x > 0){
        int d = x % 10;
        
        if(d != 4 && d != 7){
            return false;
        }
        x /= 10;
    }
    return true;
}

int main () {
    int n;
    cin >> n;
    
   
   for(int i=1; i<=n; i++){
       if(lucky(i) && n % 