#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    int cntt= 0;
    for (int i=start; i<=end; i++) {
        int cnt = 0;
        for (int j=1;j<=i-1;j++) {
            if (i%j==0) {
                cnt++;
            }
        }
        if (cnt==3) {
            cntt++;
        }
    }
    cout << cntt;

    return 0;
}