#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = a/b;
    d = a%b;

    cout << c << ".";
    for (int i=1; i<=20; i++) {
        cout << (d)*10/b;
        d= (d)*10%b;
    }




    // 여기에 코드를 작성해주세요.
    return 0;
}