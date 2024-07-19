#include <iostream>
#include <string>

using namespace std;

string str;

bool Palindrome(string &s) {
    for(int i = 0; i < s.length(); i++)
        if(s[i] != s[ s.length() - i - 1])
            return false;
    
    return true;
}

int main() {
    // 입력:
    cin >> str;

    if(Palindrome(str))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}