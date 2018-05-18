#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct ponto {
    int x, y;
} ponto;

bool cmp(ponto a, ponto b) {
    return a.x < b.x;
}

int main() {
    int n, lasty;
    vector<ponto> v;

    cin >> n;
    for(int i = 0; i < n; i++) {
        ponto aux;
        cin >> aux.x;
        cin >> aux.y;
        v.push_back(aux);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << v[0].x;
            lasty = v[0].y;
        }
        if(v[i].x > lasty ) {
            cout << ' ' << lasty << endl;
            cout << v[i].x;
        }
        lasty = v[i].y;
    }

    cout << ' ' << lasty << endl;
}
