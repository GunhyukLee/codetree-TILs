#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1;i<=n;i++) {
        if (i%2==1) {
            for (int j=1; j<=i/2+1; j++) {
                cout << "* ";
            }
        }
        if (i%2==0) {
            for (int j=1;j<=n-(i/2-1);j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i=n;i>=1;i--) {
        if (i%2==1) {
            for (int j=1; j<=i/2+1; j++) {
                cout << "* ";
            }
        }
        if (i%2==0) {
            for (int j=1;j<=n-(i/2-1);j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}