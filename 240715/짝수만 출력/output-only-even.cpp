#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a%2==0) {
        a=a;
    }
    else {
        a+=1;
    }

    while (a<=b) {
        cout << a << " ";
        a+=2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}