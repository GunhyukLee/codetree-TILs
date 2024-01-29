#include <iostream>
using namespace std;

int main() {
    int n;
    bool x = true;

    cin >> n;

    for (int i=2;i<n;i++) {
        if (n%i==0) {
            x = false;
        }
    }
    if (x==true) {
        cout << "P";
    }
    else {
        cout << "C";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}