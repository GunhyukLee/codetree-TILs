#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;
    if (c<0) {
        cout << "ice";
    }
    else if (c>=100) {
        cout << "vapor";
    }
    else { 
        cout << "water";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}