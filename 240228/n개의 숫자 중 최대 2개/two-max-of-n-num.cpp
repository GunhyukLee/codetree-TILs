#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int max_val = INT_MIN;
    int max_val2 = INT_MIN;

    int cnt = 0;

    for (int i=0;i<n;i++) {
        
        cin >> a[i];

        if (a[i]>max_val) {
            max_val = a[i];
            cnt=1;
        }
        else if (a[i]==max_val) {
            cnt=2;
        }

        if (max_val > a[i] && a[i]>=max_val2) {
            max_val2 = a[i];
        }
        if (cnt ==2 ) {
            max_val2 = a[i];
        }
    }

    cout << max_val << " " << max_val2;
    // 여기에 코드를 작성해주세요.
    return 0;
}