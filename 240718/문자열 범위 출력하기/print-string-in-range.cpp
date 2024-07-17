#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);

    bool A = false;

    int i = 1;
    while(i<=str.length()) {
        if (str[i] ==' ') {
            A = true;
        }
        i++;
    }
    if (A==true) {
        for (int i=2;i<10;i++) {
            cout << str[i];
        }
    }

    

    // 여기에 코드를 작성해주세요.
    return 0;
}