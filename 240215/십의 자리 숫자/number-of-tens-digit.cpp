#include <iostream>
using namespace std;

int main() {
    int a[100];
    int cnt_a[10] = {};
    int i=0;

    while(1) {
        cin >> a[i];
        if (a[i]==0) {
            break;
        }
        cnt_a[(a[i]/10-1)]++;
        i++;
    }

    for (int i=0;i<9;i++) {
        cout << i+1 << " - " << cnt_a[i] << endl;
    }
    return 0;
}