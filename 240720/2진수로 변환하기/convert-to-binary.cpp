#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int cnt = 0;

    while (1) {
        if (n<2) {
            arr[cnt] = n;
            cnt++;
            break;
        }
        arr[cnt] = n%2;
        cnt++;
        n/=2;
    }

    for (int i=cnt-1; i>=0;i--) {
        cout << arr[i];
    }
    return 0;
}