#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;

    cin >> a;
    int len = a.length();

    for (int i=len-1; i>=0;i--) {
        if (i%2==1) {
            cout << a[i];
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}