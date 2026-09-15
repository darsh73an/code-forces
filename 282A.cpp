#include<iostream>
using namespace std;

int main() {
    int n,x = 0; // n is the input number and x is output
    cin >> n;
    
    while(n--){
      string s ;
      cin >> s;
      
      if(s.find("++") != string::npos){
          x++;
      }else{
          x--;
      }
    }
    cout << x;
}
