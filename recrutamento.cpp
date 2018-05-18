#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

typedef struct candidato {
    string nome;
    int first;
    int second;
} candidato;

bool cmp(candidato a, candidato b) {
    return (a.second > b.second || (a.second == b.second) && a.first > b.first);
}

int main() {
    int n, f, s;
    string name;
    vector<candidato> v;

    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> name >> f >> s;
        candidato aux;
        aux.nome = name;
        aux.first = f;
        aux.second = s;
        v.push_back(aux);
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (vector<candidato>::iterator it = v.begin(); it != v.begin()+3; it++) {
        cout << (*it).nome << endl;
    }

}
