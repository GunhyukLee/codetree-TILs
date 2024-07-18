#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2={};

    cin >> str1;

    char a = str1[0];

    int cnt = 1;
    
    for (int i=1;i<str1.length();i++) {
        if (str1[i]==a) {
            cnt++;
        }
        else {
            str2 += a;
            str2 += to_string(cnt);
            a = str1[i];
            cnt = 1;
        }
    }
    str2 += a;
    str2 += to_string(cnt);
    cout << str2.length() << endl << str2;
    // 여기에 코드를 작성해주세요.
    return 0;
}