#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    string C;

    int A_len = A.length();
    int cnt = 0;

    for (int i = 0;i<A_len;i++) {
        if (A==B) {
            break;
        }
        A = A.substr(A_len-1,1) + A.substr(0,A_len-1);
        cnt++;
    }
    if (cnt==0) {
        cout << -1;
    }
    else {
        cout << cnt;   
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}