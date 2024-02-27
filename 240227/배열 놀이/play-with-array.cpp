#include <iostream>
using namespace std;

int main() {
    int n ,q;
    cin >> n >> q;
    int num[n];
    int num_q[q];
    int a,b;
    
    for (int i=0; i<n; i++) {
        cin >> num[i];
    }

    for (int i=0;i<q;i++) {
        cin >> num_q[i];
        if (num_q[i]==1) {
            cin >> a;
            cout << num[a-1] << endl;
        }
        else if (num_q[i]==2) {
            cin >> a;
            int cnt = 0;
            for (int i=0;i<n;i++) {
                if (num[i]==a) {
                    cout << i+1 << endl;
                    cnt++;
                    break;
                }
            }
            if (cnt==0) {
                cout << cnt << endl;
            }
        }
        else if (num_q[i]==3) {
            cin >> a >> b;
            for (int i=a-1;i<b;i++) {
                cout << num[i] << " ";
            }
        }
    }
    // 여기에 코드를 작성해주세요. 문제 자체를 못 알아먹게 좆같이도 냈네
    return 0;
}