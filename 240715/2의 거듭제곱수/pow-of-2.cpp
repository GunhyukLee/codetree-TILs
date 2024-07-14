#include <iostream>
using namespace std;

int main() {
    int n;
    int x = 0;
    int y = 1;

    cin >> n;


    while (1) {
        if (n==y) {
            cout << x;
            break;
        }
        y*=2;
        x++;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}