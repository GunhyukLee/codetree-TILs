#include <iostream>
using namespace std;

int main() {
    int a, b, i, sum, cnt;
    cin >> a >> b;
    sum = 0;
    cnt = 0;

    for (i=a;i<=b;i++) {
        if (i%5==0 || i%7==0) {
            cnt++;
            sum+=i;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << " " << double(sum)/(cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}