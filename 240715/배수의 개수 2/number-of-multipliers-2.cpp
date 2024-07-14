#include <iostream>
using namespace std;

int main() {
    int cnt,b,i;
    cnt = 0;
    for (i=1;i<=10;i++) {
        cin >> b;

        if (b%2==1)
            cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}