#include <iostream>
using namespace std;

int main() {
    char arr_2d[5][3];

    for (int i=0;i<5;i++) {
        for (int j=0;j<3;j++) {
            cin >> arr_2d[i][j];
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<3;j++) {
            cout << (char)(arr_2d[i][j]-32) << " ";
        }
        cout << endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}