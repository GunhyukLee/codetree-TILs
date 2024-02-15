#include <iostream>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    int a[100] = {A,};
    int cnt_a[B] = {};

    int i=0;
    int sum=0;

    while(1) {
        a[i+1] = a[i]/B;
        cnt_a[a[i]%B]++;

        if (a[i+1]<=1) {
            break;
        }
        i++;
    }

    for (int i=0;i<B;i++) {
        sum += cnt_a[i]*cnt_a[i];
    }
    
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}