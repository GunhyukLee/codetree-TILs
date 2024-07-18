#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int cnt=0;

    for (int i=0;i<A.length()-B.length()+1;i++) {
        if (A[i]==B[0] && A[i+1]==B[1]) {
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}