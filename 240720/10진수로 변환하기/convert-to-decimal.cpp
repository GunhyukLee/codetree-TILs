#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    int num= 0;
    
    for (int i=0;i<(int) n.size();i++) {
        num = num*2 + (int)(n[i]-'0');
    }
    cout << num;
    // 여기에 코드를 작성해주세요.
    return 0;
}