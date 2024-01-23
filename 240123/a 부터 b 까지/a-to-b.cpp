#include <iostream>
using namespace std;

int main() {
    int a,b,i;
    cin >> a >> b;
    
    for (i=1; i<=b; i) {
        if (i%2==1) {
            i= i*2;
            if (a<=i && i<=b)
                cout << i << " ";
        }
        else if (i%2==0) {
            i= i+3;
            if (a<=i && i<=b)
                cout << i << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}