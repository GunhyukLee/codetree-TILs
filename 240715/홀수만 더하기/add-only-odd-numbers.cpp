#include <iostream>
using namespace std;

int main() {
    int n, i, a, sum;
    cin >> n;
    sum = 0;

    for (i=1;i<=n;i++) {
        cin >> a;

        if (a%2==1 && a%3==0)
            sum+=a;
    }
    cout << sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}