#include <iostream>
using namespace std;

int main() {
    int a[100];
    int cnt_a[10] ={};

    for (int i=0;i<100;i++) {
        cin >> a[i];
        if (a[i]==0) {
            break;
        }
        cnt_a[(a[i])/10-1]++; 
    }

    
    for (int i=100;i>=10;i-=10) {
        cout << i << " - " << cnt_a[(i/10)-1] << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}