#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;

    i=1;

    while (i<=n) {
        if (i%3==0)
            cout << 0 << " ";
        else if (i>=10) {
            // 1의 자리가 3의 배수
            if ( ( i % ( (i/10) * 10 ) ) % 3==0 )
                cout << 0 << " ";
            // 10의 자리가 3의 배수
            else if ( ( ( (i/10) * 10 ) ) % 3==0 )
                cout << 0 << " ";
            else 
                cout << i << " ";
        }
        else
            cout << i << " ";
        i+=1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}