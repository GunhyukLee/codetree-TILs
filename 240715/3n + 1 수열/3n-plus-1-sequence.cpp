#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    
    while (1) {
        if (n%2==0) {
            count += 1;
            n=n/2;
        }
        else if (n%2==1 && n!=1)  {
            count += 1;
            n = 3*n+1;
        }
        else if (n==1) {
            cout << count;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}