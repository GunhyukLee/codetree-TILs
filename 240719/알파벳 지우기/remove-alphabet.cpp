#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    
    string C = A;
    string D = B;
    int n = 0;

    for (int i=0;i<A.length();i++) {
        if (A[i]>='a' && A[i]<='z') {
            C.erase(n,1);
        }
        else {
            n++;
        }
    }
    
    n = 0;
    for (int i=0;i<B.length();i++) {
        if (B[i]>='a' && B[i]<='z') {
            D.erase(n,1);
        }
        else {
            n++;
        }
    }
    cout << stoi(C)+stoi(D);
    // 여기에 코드를 작성해주세요.
    return 0;
}