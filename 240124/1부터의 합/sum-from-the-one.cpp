#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    int sum=0;

    for (i=1; i<=100; i++) {
        sum+=i;
        if (sum>=n) {
            break;
        }
    }
    cout << i;

    // 여기에 코드를 작성해주세요.
    return 0;
}