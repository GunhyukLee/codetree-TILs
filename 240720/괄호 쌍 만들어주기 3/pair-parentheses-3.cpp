#include <iostream>
#include <string>
using namespace std;

int main() {
    string A;
    cin >> A;

    int cnt = 0;
    for (int i=0;i<A.length()-1;i++) {
        for (int j=i;j<A.length();j++) {
            if (A[i]=='(' && A[j]==')') {
                cnt++;
            }
        }
    }
    cout << cnt;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}