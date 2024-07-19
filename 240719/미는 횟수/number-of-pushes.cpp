#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string C;

    int A_len = A.length();
    int n = 0;
    bool AA = false;

    for (int i = 0;i<A_len;i++) {
        if (A==B) {
            AA = true;
            break;
        }
        A = A.substr(A_len-1,1) + A.substr(0,A_len-1);
        n++;
    }
    if (AA==false) {
        cout << -1;
    }
    else if (AA==true) {
        cout << n;   
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}