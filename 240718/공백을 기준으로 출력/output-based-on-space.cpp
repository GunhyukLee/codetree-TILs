#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    getline(cin,str1);
    getline(cin,str2);

    string str3 = str1+str2;
    int len3 = str3.length();

    for (int i=0;i<len3;i++) {
        if (str3[i]==' ') {
            continue;
        }
        cout << str3[i];
    }
    
    return 0;
}