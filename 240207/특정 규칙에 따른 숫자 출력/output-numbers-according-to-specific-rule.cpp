#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt=0;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i-1;j++) {
            cout << "  ";
        }
        for (int j=1;j<=n+1-i;j++) {
            cnt++;
            if (cnt>=10) {
                cnt = 1;
            }
            cout << cnt << " ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}