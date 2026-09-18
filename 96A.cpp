#include<iostream>
using namespace std;

int main(){
    
    string s;
    cin >> s;
    int count = 1;
    
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            count++;
        }else{
            count = 1;
        }
        
        if(count >= 7){
            cout << "YES\n";
            return 0; // to end 
        }
    }
    cout << "NO\n";
}

// TC 0(n)
// SC 0(1)