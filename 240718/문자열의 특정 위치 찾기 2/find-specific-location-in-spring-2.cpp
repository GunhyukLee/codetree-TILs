#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char n;
    cin >> n;
    int cnt = 0;

    for (int i=0;i<5;i++) {
        if (str[i][2]==n || str[i][3]==n) {
            cout << str[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}