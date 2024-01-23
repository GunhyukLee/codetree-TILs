#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;

    i=1;

    while (i<=n) {
        // 10 이하의 3의 배수
        if (i<10) {
            if (i%3==0)
                cout << 0 << " ";
            else
                cout << i << " ";
        } 

        // 10 이상의 숫자
        else if (i>=10) {
            // 10 이상의 3의 배수
            if (i%3==0)
                cout << 0 << " ";

            // 1의 자리가 3의 배수
            else if ( ( i - ( (i/10) * 10 ) )% 3==0 && ( i - ( (i/10) * 10 ) ) !=0 )
                cout << 0 << " ";

            // 10의 자리가 3의 배수
            else if ( ( (i/10) ) % 3==0 )
                cout << 0 << " ";

            else 
                cout << i << " ";
        }

        i+=1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}