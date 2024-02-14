#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    a[0] = n;
    int cnt=0;
    int i = 1;
    while (i++) {
        a[i] = a[i-1]+a[0];
        cout << a[i] << " ";
        if (a[i]%5==0) {
            cnt++;
        }
        if (cnt==2) {
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}