#include <iostream>
using namespace std;

int main() {
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int day_s = d1;
    int month_s = m1;
    int cnt = 1;

    while (1) {
        cnt++;
        day_s++;
        if (day_s > month[m1]) {
            m1++;
            day_s=1;
        }

        if (m1==m2 && day_s==d2) {
            break;
        }
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}