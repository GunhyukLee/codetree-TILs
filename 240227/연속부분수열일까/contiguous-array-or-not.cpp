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
    int cnt;
    for (int i=0; i<n2; i++) {
        cnt = 0;
        for (int j=0; j<n1; j++) {
            if (B[i]==A[j]) {
                cnt++;
            }
        }
    }
    if (cnt>=n2) {
        cout << "Yes";
    }
    else
        cout << "No";
    // 여기에 코드를 작성해주세요.
    return 0;
}