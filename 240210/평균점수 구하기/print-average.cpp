#include <iostream>
using namespace std;

double a[100];
double sum = 0;
double cnt = 0;
int main() {

    for (int i=0;i<8;i++) {
        cin >> a[i];
        sum+=a[i];
        cnt++;
    }

    cout << fixed, cout.precision(1);
    cout << sum/cnt;
    

    // 여기에 코드를 작성해주세요.
    return 0;
}