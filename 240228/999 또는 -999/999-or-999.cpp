#include <iostream>
#include <climits>
using namespace std;
int main() {
    int a[100];
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for (int i=0;i<100;i++) {
        cin >> a[i];
        if (a[i]==999 || a[i]==-999) {
            break;
        }
        if (a[i]>=max_val) {
            max_val = a[i];
        }
        if (a[i]<=min_val) {
            min_val = a[i];
        }
    }
    cout << max_val << " " << min_val;
    // 여기에 코드를 작성해주세요.
    return 0;
}