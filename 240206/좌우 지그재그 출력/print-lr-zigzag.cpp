#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    for (int i=1; i<=n; i++) {
        if (i%2==1) {
            for (int j=1;j<=n;j++) {
                cnt++;
                cout << cnt << " ";
            }
        }
        else {
            cnt = n*i;
            for (int j=1;j<=n;j++) {
                cout << cnt << " ";
                cnt--;
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}