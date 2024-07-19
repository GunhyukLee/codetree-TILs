#include <iostream>
using namespace std;

bool A(int Y) {
    if ( Y%100==0 && Y%400!=0) {
        return false;
    }
    else if (Y%4==0) {
        return true;
    }
return false;
}

int LastDayNumber(int Y, int M) {
    if(M == 2 && A(Y)==1)
        return 29;
    else if (M == 2 && A(Y)==0)
        return 28;
    if(M == 4 || M == 6 || M == 9 || M == 11)
        return 30;
    
    return 31;
}

// 윤년이 아닐 때 m월 d일이 존재하는지 여부를 확인하는 함수를 작성합니다.
bool JudgeDay(int Y,int M, int D) {
    if(M <= 12 && D <= LastDayNumber(Y,M))
        return true;
    
    return false;
}

bool C(int Y, int M, int D) {
    if (JudgeDay(Y,M,D)==1) {
        return true;
    }
return false;
}

int main() {
    int Y, M, D;
    cin >> Y >> M >> D;

    if (C(Y,M,D)==1) {
        if (3<=M && M<=5) {
            cout << "Spring";
        }
        else if (6<=M && M<=8) {
            cout << "Summer";
        }
        else if (9<=M && M<=11) {
            cout << "Summer";
        }
        else
            cout << "Winter";
    }
    else {
        cout << -1;
    }
    return 0;
}