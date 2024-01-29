#include <iostream>
using namespace std;

int main() {
    int n;
    int y = 1;
    int x = 0;
    cin >> n;
    
    while (1) {
        if (n==y) {
            cout << x;
            break;
        }
        y *= 2;
        x++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}