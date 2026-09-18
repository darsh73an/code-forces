#include<iostream>
#include<unordered_set>
using namespace std;

int main (){
    int y;
    cin >> y;
    
    while(true){
        y++;
        
        string s = to_string(y);
        unordered_set<char> st(s.begin(),s.end());
        
        if(st.size() == 4){
            cout << s;
            break;
        }
    }
}

