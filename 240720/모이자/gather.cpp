#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int sum;
    int min = INT_MAX;
    for (int i=0;i<n;i++) {
        int sum = 0;
        for (int j=0;j<n;j++) {
            sum += abs(i-j)*arr[j];
        }
        if (sum<=min) {
            min = sum;
        }
    }
    cout << min;
    // 여기에 코드를 작성해주세요.
    return 0;
}