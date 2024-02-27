#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n>> m;

    int w[n];
    int cnt = 0;

    for (int i=0;i<n;i++) {
        cin >> w[i];
        if (w[i]==m) {
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}