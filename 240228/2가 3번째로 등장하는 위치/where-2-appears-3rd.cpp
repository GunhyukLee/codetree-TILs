#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt,cntt;
    cntt = 0;
    cnt =0;
    int a[n];
    
    for (int i=0; i<n; i++) {
        cntt++;
        cin >> a[i];
        if (a[i]==2) {
            cnt++;
        }
        if (cnt==3) {
            break;
        }
    }

    cout << cntt;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}