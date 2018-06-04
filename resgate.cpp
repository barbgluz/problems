#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    queue<int> r;
    queue<int> q;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        q.push(v);
    }

    int count = 1;
    while (!q.empty()) {
        if (q.front() > count) {
           int aux = q.front();
           q.pop();
           q.push(aux);
        } else {
            r.push(q.front());
            q.pop();
        }
        count++;
    }

    for (int i = 0; i < m; i++) {
        cout << r.front() << endl;
        r.pop();
    }
}
