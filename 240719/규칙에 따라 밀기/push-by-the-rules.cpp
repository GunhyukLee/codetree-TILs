#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    for (int i=0;i<A.length();i++) {
        if (B[i]=='L') {
            A = A.substr(1,A.length()-1) + A.substr(0,1);
        }
        else if (B[i]=='R') {
            A = A.substr(A.length()-1,1)+ A.substr(0,A.length()-1);
        }
    }
    cout << A;
    // 여기에 코드를 작성해주세요.
    return 0;
}