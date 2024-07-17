#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int min = INT_MAX;

    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    for (int i=n;i>=0;i--) {
        for (int j=i-1;j>=0;j--) {
            if (j==i) {
                break;
            }
            else {
                if (min>=a[i]-a[j])
                min = a[i]-a[j];
            }
        }
    }
    cout << min;
    return 0;
}