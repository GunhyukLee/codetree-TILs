#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a;
    int cnt = 0;

    for (int i=0;i<a.length();i++) {
        if (a[i]=='e') {
            break;
        }
        cnt++;
    }
    cout << a.erase(cnt,1);
    // 여기에 코드를 작성해주세요.
    return 0;
}