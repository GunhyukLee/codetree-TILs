#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[4];
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < 4; i++)
		cin >> str[i];
	
	// 입력받은 문자열을 역순으로 출력합니다.
	for(int i = 3; i >= 0; i--)
		cout << str[i] << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}