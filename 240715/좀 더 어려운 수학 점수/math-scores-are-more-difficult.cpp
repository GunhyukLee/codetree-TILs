#include <iostream>
using namespace std;

int main() {
    int A_m, A_e, B_m, B_e;
    cin >> A_m >> A_e;
    cin >> B_m >> B_e;

    if (A_m>B_m || (A_m>=B_m && A_e>B_e))
        cout << "A";
    else 
        cout << "B";
    // 여기에 코드를 작성해주세요.
    return 0;
}