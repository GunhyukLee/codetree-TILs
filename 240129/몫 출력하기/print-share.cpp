#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;

    while (1) {
        cin >> n;
      
        if (n%2==1) {
            continue;
        }
        else if (n%2==0) {
            cout << n/2 << endl;
            count += 1;
        }
        if (count==3) {
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}