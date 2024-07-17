#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];

    int cnt = 0;

    for (int i=0;i<n;i++) {
        cnt = i+1;
        for (int j=0;j<n;j++) {
            arr[i][j] = cnt;
            cnt+=n;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}