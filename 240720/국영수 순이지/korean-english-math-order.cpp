#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Score {
    public:
        string name;
        int k, e, m;
    Score(string name="",int k=0, int e=0, int m=0) {
        this->name=name;
        this->k=k;
        this->e=e;
        this->m=m;
    }
};

bool com(Score a, Score b) {
    if (a.k!=b.k) {
        return a.k > b.k;
    }
    if (a.e!=b.e) {
        return a.e > b.k;
    }
    return a.m > b.m;
}
int main() {
    int n;
    cin >> n;

    Score mem[n];

    for (int i=0;i<n;i++) {
        string name;
        int k, e, m;
        cin >> name >> k >> e >> m;
        mem[i] = Score(name,k,e,m);
    }

    sort(mem,mem+n,com);

    for (int i=0;i<n;i++) {
        cout << mem[i].name << " " << mem[i].k << " " << mem[i].e << " " << mem[i].m << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}