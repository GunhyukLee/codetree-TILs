#include <iostream>
using namespace std;

int main() {
    int a,b,i,sum;
    cin >> a >> b;
    sum = 0;

    if (b>=a) {
        for (i=a; i<=b; i++) {
          if (i%5==0) {
              sum+=i;
            }
       }
    }
    else {
        for (i=b; i<=a; i++) {
          if (i%5==0) {
              sum+=i;
            }
       }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}