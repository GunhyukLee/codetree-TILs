#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int cnt = 0;
    
    for (int i=1; i<=10; i++) {
        cin >> a;
        if (a>=0 && a<=200) {
            sum+=a;
            cnt++;
        }
    }

    cout << fixed, cout.precision(1);

    cout << sum << " " << (double)sum/cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}