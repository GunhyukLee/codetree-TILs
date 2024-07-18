#include <iostream>
#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    
    for (int i=0;i<str.length();i++) {
        if (str[i]==' ') {
            cout << endl;
        }
        else 
            cout << str[i];
    }
	
	// 문자열을 입력받습니다.

    return 0;
}