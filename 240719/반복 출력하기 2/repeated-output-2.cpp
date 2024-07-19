#include <iostream>
using namespace std;

void A(int n) {
    if (n==0) {
        return;
    }
    A(n-1);
    cout << "HelloWorld" << endl;
}
int main() {
    int n;
    cin >> n;

    A(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}