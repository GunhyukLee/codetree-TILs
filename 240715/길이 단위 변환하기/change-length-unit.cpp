#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double ft = 30.48;
    double mi = 160934;
    double a = 9.2;
    double b = 1.3;

    cout << fixed;
    cout.precision(1);
    cout << a << "ft = " << a*ft << "cm" << endl;
    cout << b << "mi = " << b*mi << "cm";   

    // 여기에 코드를 작성해주세요.
    return 0;
}