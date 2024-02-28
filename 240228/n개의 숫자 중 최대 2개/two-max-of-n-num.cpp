#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int max_val1 = INT_MIN;
    int max_val2 = INT_MIN;

    int cnt = 0;

    for (int i=0;i<n;i++) {
        
        cin >> a[i];

        if (a[i]>max_val1) {
            max_val2 = max_val1;
            max_val1 = a[i];
        }
        else if (a[i]==max_val1) {
            max_val2 = max_val1;
            max_val1 = max_val1;
        }
        else if (a[i]<=max_val1 && a[i]>=max_val2) {
            max_val2 = a[i];
        }
    }

    cout << max_val1 << " " << max_val2;
    // 여기에 코드를 작성해주세요.
    return 0;
}