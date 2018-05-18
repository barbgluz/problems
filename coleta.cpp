#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<int> v, p;

    cin >> n;
    for (int i =  0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(x);
        p.push_back(y);
    }

    sort(p.begin(), p.end());
    sort(v.begin(), v.end());

    cout << v[n/2] << ' ' << p[n/2] << endl;
}
