#include <iostream>
using namespace std;
void A(int n, int m) {
    int min;
    if (n>=m) {
        min = m;
    }
    else {
        min = n;
    }
    int max = 1;
    for (int i=1;i<=min;i++) {
        if (n%i==0 && m%i==0) {
            max = i;
        }     
    }
    cout << n*m/max;
}

int main() {
    int n ,m;
    cin >> n >> m;
    A(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}