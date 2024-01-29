#include <iostream>
using namespace std;

int main() {
    int i=2;
    int n;
    bool x = false;

    cin >> n;
    
    while (i<n) {
        if (n%i==0) {
            x = true;
        }
        i++;
    }
    if (x==true) {
        cout << 'C';
    }
    else {
        cout << 'N';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}