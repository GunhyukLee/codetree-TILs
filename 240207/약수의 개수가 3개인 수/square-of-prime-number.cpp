#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int cntt= 0;
    for (int i=start; i<=end;i++) {
        int cnt = 0;
        for (int j=1;j<=start;j++) {
            if (start%i==0) {
                cnt++;
            }
        }
        if (cnt==3) {
            cntt++;
        }
    }
    cout << cntt;
    // 여기에 코드를 작성해주세요.
    return 0;
}