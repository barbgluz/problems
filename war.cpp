#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct soldier {
    int b, j, total, pos;
} soldier;

bool cmp(soldier a, soldier b) {
    return a.j > b.j;
}
int main() {
    int n, t = 0;

    while(cin >> n, n) {
        vector<soldier> s;

        for(int i = 0; i < n; i++) {
            soldier aux;
            cin >> aux.b >> aux.j;
            aux.total = aux.b + aux.j;
            aux.pos = 0;

            s.push_back(aux);
        }

        stable_sort(s.begin(), s.end(), cmp);

        int total = s[0].total;
        int pos = 0;
        for(int i = 1; i < n; i++) {
            pos += s[i-1].b;

            if(pos + s[i].total > total) {
                total = pos + s[i].total;
            }
        }
         cout << "Case " << ++t << ": "<< total << endl;

    }
}
