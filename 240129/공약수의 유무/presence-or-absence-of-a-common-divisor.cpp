#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool c = false;
    cin >> a >> b;

    for(int i=a;i<=b;i++) {
        if (1920%i==0 && 2880%i==0) {
            c = true;
        }
    }
    if (c==true) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}