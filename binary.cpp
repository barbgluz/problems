#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int n, k, a;

    scanf("%d%d", &n, &k);

    vector<int>v;

    for (int i = 0; i < n; i++) {
        int z;
        scanf("%d", &z);
        v.push_back(z);
    }

    for (int i = 0; i < k; i++) {
        scanf("%d", &a);
        if (binary_search(v.begin(), v.end(), a)) {
            vector<int>::iterator it = find(v.begin(), v.end(), a);
            cout << it-v.begin() << endl;
        } else {
            printf("-1\n");
        }
    }
}
