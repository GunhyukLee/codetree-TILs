#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int n = 0;
    int i=1;

    while (1) {
        cin >> a;

        if (a<20 || 30<=a) {
            cout << fixed; cout.precision(2);
            cout << (double)sum/n;
            break;
        }
        sum +=a;
        n +=1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}