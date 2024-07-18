#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int cnt =0;
    int count=0;
    for (int i=0;i<A.length();i++) {
        
        if (i+B.length()-1>=A.length()) {
            continue;
        }

        for (int j=0;j<B.length();j++) {
            if (A[i+j]==B[j]) {
                count++;
            }
            else {
                count = 0;
            }

            if (count==B.length()) {
                cnt++;
            }

        } 
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}