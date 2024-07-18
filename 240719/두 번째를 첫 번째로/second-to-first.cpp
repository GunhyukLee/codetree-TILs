#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;

    char B = A[1];
    for (int i=0;i<A.length();i++) {
        if (A[i]==B) {
            A[i] = A[0];
        }
        cout << A[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}