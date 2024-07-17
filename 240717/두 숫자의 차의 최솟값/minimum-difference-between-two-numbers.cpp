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

    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (j==i) {
                break;
            }
            else {
                if (min>=a[j]-a[i])
                min = a[j]-a[i];
            }
        }
    }
    cout << min;
    return 0;
}