#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int aa = 0;

    for (int i=1; i<=n; i++) {
        n /= i;
        aa++;
        if (n<=1) {
            cout << aa;
            break;
        }
    }
    return 0;
}