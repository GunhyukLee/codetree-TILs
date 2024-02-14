#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];

    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    for (int i=0;i<n;i++) {
        cout << a[i]*a[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}