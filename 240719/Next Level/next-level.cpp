#include <iostream>
#include <string>
using namespace std;

class Idvel {
    public:
        string a;
        int b;
    Idvel(string a="", int b=0) {
        this->a = a;
        this->b = b;
    }
};

int main() {
    string a;
    int b;

    cin >> a >> b;

    Idvel student1("codetree", 10);
    cout << "user " << student1.a << " lv " << student1.b << endl;
    Idvel student2(a, b);
    cout << "user " << student2.a << " lv " << student2.b << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}