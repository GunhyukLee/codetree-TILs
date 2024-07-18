#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    int len = 0;
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < 10; i++) {
		cin >> str[i];
        len +=  str[i].length(); 
    }

    cout << len;
    return 0;
}