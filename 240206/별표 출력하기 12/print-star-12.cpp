#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n;j++) {
            if j==1 || j==n || (j%2==0 && i>=j)) {
                cout << "* ";
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}