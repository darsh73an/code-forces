#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int low = 0, upp = 0;
    string s;

    cin >> s;

    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z')
            low++;
        else
            upp++;
    }

    if (upp > low) {
        for (char &ch : s)
            ch = toupper(ch);
    } else {
        for (char &ch : s)
            ch = tolower(ch);
    }

    cout << s;
}
