#include <iostream>
using namespace std;

int main() {
    int h, w;
    int b;
    
    cin >> h >> w;

    b = w/(0.01*h)/(0.01*h);
    cout << b << endl;

    if (b>=25) {
        cout << "Obesity";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}