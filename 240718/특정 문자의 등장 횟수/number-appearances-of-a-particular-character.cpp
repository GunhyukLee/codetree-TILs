#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;

    cin >> a;

    int cnt1 = 0;
    int cnt2 = 0;
    for (int i=0;i<a.length()-1;i++) {

            if (a[i]=='e' && a[i+1]=='e')
            cnt1++;
            if (a[i]=='e' && a[i+1]=='b')
            cnt2++;
        
    }
    cout << cnt1 << " " << cnt2;
    // 여기에 코드를 작성해주세요.
    return 0;
}