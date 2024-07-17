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

    for (int i=1;i<n;i++) {
        if (min >= a[i]-a[i-1])
            min = a[i]-a[i-1];
        }

    cout << min;
    return 0;
}