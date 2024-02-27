#include <iostream>
using namespace std;

int main() {
    char word[6] = {'L','E','B','R','O','S'};
    char idx;
    cin >> idx;
    int cnt = 0;

    for (int i=0; i<6; i++) {
        if (word[i]==idx) {
            cout << i;
            cnt++;
        }
    }

    if (cnt==0) {
        cout << "None";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}