#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    //동서남북
    int dx = [1,-1,0,0];
    int dy = [0,0,-1,1];

    int x=0;
    int y=0;

    for (int i=0;i<N;i++) {
        char A, int B;
        cin >> A >> B;

        int dist = B;
        int dir;

        if (A=='E') {
            dir = 0;
        }
        else if (A=='W') {
            dir = 1;
        }
        else if (A=='S') {
            dir = 2;
        }
        else if (A=='N') {
            dir = 3;
        }
        x += dx[dir]*dist;
        y += dy[dir]*dist;

    }

    cout << x << " " << y;
    // 여기에 코드를 작성해주세요.
    return 0;
}