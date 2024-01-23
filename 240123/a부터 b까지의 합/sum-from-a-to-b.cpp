#include <iostream>
using namespace std;

int main() {
    int a,b,i,sum;
    sum =0;
    cin >> a >> b;
    for (i=a; i<=b; i++)
        sum = sum+i;
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}