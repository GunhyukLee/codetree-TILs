#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double arr[100];
    double sum = 0;
    int cnt = 0;

    for (int i=0;i<n;i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt++;
    }
    double avg = sum/cnt; 
    
    cout << fixed, cout.precision(1);
    cout << avg << endl;

    if (avg >= 4) {
        cout << "Perfect";
    } 
    else if (avg >= 3) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}