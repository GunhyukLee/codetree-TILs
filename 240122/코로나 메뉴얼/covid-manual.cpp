#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char ya, yb, yc;
    cin >> ya >> a;
    cin >> yb >> b;
    cin >> yc >> c;

    if ( ya=='Y' && a>=37 ) {
        if ( (yb=='Y' && b>=37) || (yc=='Y' && c>=37))
            cout << 'Y';
        else
            cout << 'Y';
    }
    else {
        if ( (yb=='Y' && b>=37) && (yc=='Y' && c>=37) )
            cout << 'Y';
        else
            cout << "N";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}