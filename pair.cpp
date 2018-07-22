#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    vector<int> v;

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        v.push_back(m);
    }

    sort(v.begin(), v.end());
    int count = 0;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        if (binary_search(v.begin(), v.end(), *it+k)) {
            count++;
        }
    }

    cout << count << endl;

}
