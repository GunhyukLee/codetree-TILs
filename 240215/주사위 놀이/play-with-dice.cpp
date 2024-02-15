#include <iostream>
using namespace std;

int main() {
    int a[10];
    int cnt_a[6]={};

    for (int i=0;i<10;i++) {
        cin >> a[i];
    }

    for (int i=0;i<10;i++) {
        cnt_a[a[i]-1]++;
    }

    for (int i=0;i<6;i++) {
        cout << i+1 << " - " << cnt_a[i] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}