#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i]%2==0) {
            cout << a[i] << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}