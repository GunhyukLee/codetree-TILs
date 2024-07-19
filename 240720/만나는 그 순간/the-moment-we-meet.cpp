#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[10000]={};
    int B[10000]={};

    int time_a = 1;
    for (int i=0;i<N;i++) {
        char D;
        int m;
        cin >> D >> m;

        for (int j=1;j<=m;j++) {
            if (D=='L') {
                A[time_a] = A[time_a-1] - 1;
            }
            else {
                A[time_a] = A[time_a-1] + 1;
            }
            time_a++;
        }
    }

    int time_b = 1;
    for (int i=0;i<M;i++) {
        char D;
        int m;
        cin >> D >> m;

        for (int j=1;j<=m;j++) {
            if (D=='L') {
                B[time_b] = B[time_b-1] - 1;
            }
            else {
                B[time_b] = B[time_b-1] + 1;
            }
            time_b++;
        }
    }

    int cnt=-1;
    for (int i=1;i<1000;i++) {
        if (A[i]==B[i]) {
            cnt = i;
            break;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}