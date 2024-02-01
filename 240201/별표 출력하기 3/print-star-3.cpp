#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x= n;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i-1;j++) {
            cout << "  ";
        }
        for (int j=2*x-1;j>=1;j--) {
            cout << "* ";
        }
        x--;
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}