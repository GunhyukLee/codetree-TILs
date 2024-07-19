#include <iostream>
#include <string>
using namespace std;

class spy {
    public:
        string a;
        int b;
    spy(string a="",int b=0) {
        this->a=a;
        this->b=b;
    }
};

int main() {
    spy mem[5];
    for (int i=0;i<5;i++) {
        string a;
        int b;
        cin >> a >> b;
        mem[i] = spy(a,b);
    } 

    int idx_min = 0;
    for (int i=1;i<5;i++) {
        if (mem[i].b <= mem[idx_min].b) {
            idx_min = i;
        }
    }

    cout << mem[idx_min].a << " " << mem[idx_min].b << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}