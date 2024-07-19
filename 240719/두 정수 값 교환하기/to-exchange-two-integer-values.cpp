#include <iostream>
using namespace std;

void A(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    A(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}