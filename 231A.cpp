#include<iostream>
using namespace std;

int main(){
    
    int n, count = 0;
    cout << "Enter the value of n : ";
    cin >> n;
    
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        
        if(a+b+c >= 2){
            count++;
        }
    }
    cout << "count is :" << count << endl;
}
