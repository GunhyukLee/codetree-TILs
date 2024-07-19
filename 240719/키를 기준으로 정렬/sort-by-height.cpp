#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class nhw {
    public:
        string name;
        int height;
        int weight;
    nhw(string name="", int height=0, int weight=0) {
        this->name=name;
        this->height=height;
        this->weight=weight;
    }
};

bool aaa(nhw a, nhw b) {
    return a.height<=b.height;
}

int main() {
    int n;
    cin >> n;
    nhw mem[n];

    for (int i=0;i<n;i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        mem[i] =nhw(name, height, weight);
    }

    sort(mem, mem+5,aaa);
    for (int i=0;i<n;i++) {
        cout << mem[i].name << " " << mem[i].height << " " << mem[i].weight << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}