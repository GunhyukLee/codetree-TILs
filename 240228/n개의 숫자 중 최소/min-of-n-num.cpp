#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >>n;

    int a[n];
    int max_val = INT_MAX;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (a[i]<=max_val) {
            max_val = a[i];
        }
    }
    int cnt =0;
    for (int i=0;i<n;i++) {
        if (a[i]==max_val) {
            cnt++;
        }
    }

    cout << max_val << " " << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}