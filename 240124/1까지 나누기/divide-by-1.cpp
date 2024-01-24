#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int aa = n;
    for (int i=1; i<=n; i++) {
        aa /= i;
        cnt++;
        if (aa<=1) {
            cout << cnt;
            break;
        }
    }
    return 0;
}