#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 1;

    for (int i=0;i<n;i++) {
        for (int j=0;j<i+x;j++) {
            cout << "*";
        }
        cout << endl;
        x+=1;
    }

    

    // 여기에 코드를 작성해주세요.
    return 0;
}