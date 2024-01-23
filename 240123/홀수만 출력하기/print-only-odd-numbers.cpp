#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin >> n;
    i=1;

    while (i<=n) {
        int a;
        cin >> a;

        if (a%2==1 && a%3==0)
            cout << a << endl;
        i+=1;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}