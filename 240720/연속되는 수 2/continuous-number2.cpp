#include <iostream>
using namespace std;

int main() {
    int N, a;
    cin >> N;

    int arr[N];
    for (int i=0;i<N;i++) {
        cin >> a;
        arr[i] = a;
    }

    int cnt = 0;
    int max = 0;
    for (int i=0;i<N;i++) {
        if (i==0 || arr[i]==arr[i-1]) {
            cnt++;
            if (cnt>=max) {
                max = cnt;
            }
        }
        else if (arr[i]!=arr[i-1]) {
            cnt = 1;
        }
    }
    cout << max;
    return 0;
}