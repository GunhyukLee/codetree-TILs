#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    int cnt=0;

    for (int i=start; i<=end; i++) {
        int sum = 0;

        for (int j=1;j<=i/2;j++) {
            if (i%j==0) {
                sum = sum+j;
            }
        }
        if (i==sum) {
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}