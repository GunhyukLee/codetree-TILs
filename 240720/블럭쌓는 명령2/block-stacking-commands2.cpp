#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n]={};
    int a,b;

    for (int i=0;i<k;i++) {
        cin >> a >> b;
        for (int j=a-1;j<b;j++) {
            arr[j]++;
        }
    }
    int max=INT_MIN;
    for (int i=0;i<n;i++) {
        if (arr[i]>=max) {
            max = arr[i];
        }
    }
    cout << max;
    // 여기에 코드를 작성해주세요.
    return 0;
}