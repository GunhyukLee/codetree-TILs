#include <iostream>
using namespace std;

int main() {
    int a=5,b=6,c=7;
    int temp1=a;
    int temp2=b;

    a = c;
    b = temp1;
    c = temp2;

    cout << a << endl << b << endl <<c;
    // 여기에 코드를 작성해주세요.
    return 0;
}