#include <iostream>
using namespace std;

int main() {
    int a[100];
    for (int i=0;i<100;i++) {
        cin >> a[i];
        if (a[i]%2==1) {
            cout << a[i]+3 << " ";
        }
        else if (a[i]%2==0 && a[i]!=0) {
            cout << a[i]/2 << " ";
        }
        
        if (a[i]==0) {
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}