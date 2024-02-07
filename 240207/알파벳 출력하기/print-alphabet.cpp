#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 65;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout << char(x);
            x++;
        }
        if (x==90) {
            x=65;
        }
        for (int j=1; j<=n-i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}