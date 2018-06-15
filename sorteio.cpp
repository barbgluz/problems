#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

struct dado {
    int key, index;
};

int main() {
    int n, k;
    queue<dado> q;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int f;
        dado aux;
        cin >> f;
        if (f < 0) {
            aux.key = f;
            aux.index = i+1;
            q.push(aux);
        }
    }

    for (int i = 0; i < n-k+1; i++) {

        while (!q.empty() && q.front().index < i+1) {
            q.pop();
        }

        if ( q.front().index >= i+1 &&  q.front().index <= i+1+k ) {
            cout << q.front().index << endl;
        }

        else if (q.front().index > i+1+k) {
            cout << '0' << endl;
        }

        if (q.empty()) {
            cout << '0' << endl;
        }
    }
}
