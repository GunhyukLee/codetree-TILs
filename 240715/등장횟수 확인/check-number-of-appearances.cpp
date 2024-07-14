#include <iostream>
using namespace std;

int main() {
    int i,n,cnt;
    cnt = 0;

    i=1;
    while (i<=5) {
        cin >> n;
        if (n%2==0)
        cnt++;
        i++;
    }
    cout << cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}