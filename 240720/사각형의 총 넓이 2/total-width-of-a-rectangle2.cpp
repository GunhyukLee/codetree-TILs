#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    int offset = 100;
    
    int area[201][201]= {};

    for (int i=0;i<n;i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        x1+=offset;
        y1+=offset;
        x2+=offset;
        y2+=offset;

        for (int j=x1;j<x2;j++) {
            for (int k=y1;k<y2;k++) {
                area[j][k] = 1;
            }
        }
    }

    int sum = 0;
    for (int j=0;j<=200;j++) {
        for (int k=0;k<=200;k++) {
            if (area[j][k] == 1) {
                sum++;
            }
        }
    }
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}