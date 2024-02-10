#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double a[100];
    double sum = 0;
    double cnt = 0;

    for (int i=0;i<n;i++) {
        cin >> a[i];
        sum += a[i];
        cnt++;
    }
    cout << fixed; cout.precision(1);
    cout << sum/cnt << endl;

    if (sum/cnt>=4) {
        cout << "Perfect";
    }
    else if (sum/cnt>=3) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}