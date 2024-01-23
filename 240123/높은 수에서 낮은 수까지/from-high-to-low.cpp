#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> a >> b;

    if (a>=b) {
        for (i=a;i>=b;i--)
            cout << i << " "; 
    }
    else if (b>a) {
        for (i=b;i>=a;i--)
            cout << i << " "; 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}