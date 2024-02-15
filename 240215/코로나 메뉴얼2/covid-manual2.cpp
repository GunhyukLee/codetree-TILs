#include <iostream>
using namespace std;

int main() {
    char A[3];
    int  B[3];
    char x[4];
    int cnt_B[4]={};

    for (int i=0;i<3;i++) {
        cin >> A[i] >> B[i];
        if (A[i]=='Y' && B[i]>=37) {
            x[i] = 'A';
        }
        else if (A[i]=='N' && B[i]>=37) {
            x[i] = 'B';
        }
        else if (A[i]=='Y' && B[i]<37) {
            x[i] = 'C';
        }
        else if (A[i]=='N' && B[i]<37) {
            x[i] = 'D';
        }

        cnt_B[(int)x[i]-65]++;
    }
    


    for (int i=0;i<4;i++) {
        cout << cnt_B[i] << " ";
        if (cnt_B[0]>=2) {
            cout << "E";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}