#include <iostream>
#include <string>
using namespace std;

class spy {
    public:
        string a;
        char b;
        int c;
    spy(string a, char b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main() {
    string a;
    char b;
    int c;
    cin >> a >> b >> c;
    spy spy1 = spy(a, b, c);
    cout << "secret code : " << spy1.a << endl;
    cout << "meeting point : " << spy1.b << endl;
    cout << "time : " << spy1.c << endl;
    return 0;
}