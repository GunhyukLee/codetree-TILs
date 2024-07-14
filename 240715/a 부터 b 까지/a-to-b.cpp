#include <iostream>
using namespace std;

int main() {
    int a,b,i;
    cin >> a >> b;

    cout << a;

    for (i=a; i<=b; i) {
        if (a<=i && i<=b) {
            cout << i << " ";
            if (i%2==1)
                i= i*2;
            else if (i%2==0)
                i = i+3;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}