#include <iostream>
using namespace std;

int main() {
    int n;

    int arr[100][100]={};
    int cnt = 1;

    for (int i=0;i<1;i++) {
        for (int j=0;j<5;j++) {
            arr[i][j] = 1;
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<1;j++) {
            arr[i][j] = 1;
        }
    }


    for (int i=1;i<5;i++) {
        for (int j=1;j<5;j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}