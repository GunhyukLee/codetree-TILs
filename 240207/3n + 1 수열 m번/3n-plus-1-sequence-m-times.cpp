#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;

    int n;
    int cnt=0;
    int i=1;
    while (i<=m) {
        cin >> n;
        cnt=0;

        while (1) {
            if (n==1) {
                break;
            } 

            if (n%2==1) {
                n*=3;
                n+=1;
            }
            else {
                n/=2;
            }
            cnt++;
        }
        cout << cnt << endl;
        i++;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}