#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    int n;
    set<string> s;

    while (cin >> n, n != 0) {
        int ans = 0;

        for (int i = 0; i < n; i++) {
            string f;
            cin >> f;
            sort(f.begin(), f.end());


            if (!s.count(f)) {
                s.insert(f);
                ans++;
            }
        }

        cout << ans << endl;
        s.clear();
    }
}
