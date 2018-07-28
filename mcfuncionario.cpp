#include <iostream>
#include <queue>
using namespace std;

bool cmp (pair<int,int> a, pair<int,int> b) {
    return a.first < b.first;
}

int main() {
    int t, n, k;

    cin >> t;
    for (int j = 0; j < t; j++) {
        priority_queue<pair<int,int>, vector<pair<int,int> >, bool(*)(pair<int,int>, pair<int,int>)  > pq(cmp);
        cin >> n >> k;

        for (int i = 0; i < n; i++) {
            pair<int,int> p;
            cin >> p.first;
            p.second = i+1;
            pq.push(p);

            if ((i+1) >= k) {
                while (pq.top().second <= (i+1)-k) {
                    pq.pop();
                }
                cout << pq.top().first << " ";
            }
        }
        cout << endl;
    }
}
