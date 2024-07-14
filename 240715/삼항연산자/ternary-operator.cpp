#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string degree;

    cin >> score;

    degree = (score == 100) ? "pass" : "failure";

    cout << degree;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}