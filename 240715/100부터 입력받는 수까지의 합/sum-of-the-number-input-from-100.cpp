#include <iostream>
using namespace std;

int main() {
    int n,i,sum;
    cin >> n;
    sum = 0;

    for (i=n; i<=100; i++)
        sum = sum+i;
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}