#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int A[n1], B[n2];
    
    for (int i=0;i<n1;i++) {
        cin >> A[i];
    }
    for (int i=0;i<n2;i++) {
        cin >> B[i];
    }

    int C[n1] = {};
    
    for (int i=0; i<n1; i++) {
        if (A[i]==B[0]) {
            C[i] = 1;
        }
    }

    int cnt;

    for (int i=0; i<n1; i++) {
        if (A[i]!=B[0]) {
            cnt = 0;
            continue;
        }
        else {
            cnt++;
        }
        if (cnt==n2) {
            break;
        }
    }

    if (cnt==n2) {
        cout << "Yes";
    }
    else
        cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}