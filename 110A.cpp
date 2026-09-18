#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int count = 0;

    
    while(n > 0){
        int lastD = n % 10;
        
        if(lastD == 4 || lastD == 7){
            count++;
        }
        n = n / 10;
    }
    if(count == 4 || count == 7){
        cout << "YES\n"; 
        return 0;
    }
    cout << "NO\n";
}

// TC 0(log n)
// SC 0(1)