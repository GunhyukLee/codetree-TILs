#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    cin >> a;
    int n = int('a') -int('A');

    for (int i=0;i<a.length();i++) {
        if (a[i]>=97) {
            a[i]-=32;
        }
        else {
            a[i]+=32;
        }
    }

    cout << a;
    // 여기에 코드를 작성해주세요.
    return 0;
}