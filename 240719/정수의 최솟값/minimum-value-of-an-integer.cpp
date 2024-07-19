#include <iostream>
using namespace std;
int A(int a, int b, int c) {
    int Min = a;
    if (Min>b) {
        Min = b;
    }
    if (Min>c) {
        Min = c;
    }
    return Min;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    cout << A(a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}