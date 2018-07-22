#include <iostream>
#include <map>
#include <iterator>
using namespace std;

int main() {
    int n, maior = 0;
    string maiors;
    map<string, int> m;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (m.count(s) == 0) {
            m[s] = 1;
        } else {
            m[s]++;
        }
    }

    for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
        if (it->second > maior) {
            maior = it->second;
            maiors = it->first;
        }
    }

    cout << maiors << endl;

}
