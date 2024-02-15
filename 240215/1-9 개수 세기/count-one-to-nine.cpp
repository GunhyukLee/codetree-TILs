#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int cnt_a[9] = {};
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    for (int i=0;i<n;i++) {
        cnt_a[a[i]-1]++;
    }

    for (int i=0;i<9;i++) {
        cout << cnt_a[i] << endl;        
    }
    return 0;
}