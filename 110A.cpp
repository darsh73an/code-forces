#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    
    while(n > 0){
        int lastD = n % 10;
        int count = 0;
        
        if(lastD == 4 || lastD == 7){
            count++;
        }
        n = n / 10;
    }
    if(count == 4 || count == 7){
        cout << "YES\n"; 
    }
    cout << "NO\n";
}

// TC 0(log n)
// SC 0(1)