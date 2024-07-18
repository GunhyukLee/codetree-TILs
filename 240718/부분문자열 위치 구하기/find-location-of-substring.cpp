#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int cnt =0;
    int count=0;

    bool C = false;
    int d = 0;
    for (int i=0;i<A.length()-B.length()+1;i++) {
    
        for (int j=0;j<B.length();j++) {
            if (A[i+j]==B[j]) {
                count++;
            }
            else {
                count = 0;
            }

            if (count==B.length()) {
                C = true;
                d = i;
            }
        } 
    }
    if (C==true) 
    cout << d;
    else
    cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}