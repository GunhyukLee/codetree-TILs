#include <iostream>
using namespace std;

void A(int n, int m) {
    int i=1;
    int minn = min(n,m);
    int b;
    while (1) {
        b = minn*i;
        if (n%b==0 && m%b==0) {
            break;
        }
        else {
            i++;
        }
    }
    cout << b;
}

int main() {
    int n ,m;
    cin >> n >> m;
    A(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}