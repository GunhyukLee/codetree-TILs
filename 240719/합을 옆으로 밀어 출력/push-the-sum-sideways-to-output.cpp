#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    string str_sum = to_string(sum);

    str_sum = str_sum.substr(1,str_sum.length()-1) + str_sum.substr(0,1);

    cout << str_sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}