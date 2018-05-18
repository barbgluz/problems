#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

typedef struct data {
    string nome;
    float numb;
} data;

bool cmp(data a, data b) {
    return a.numb > b.numb;
}

int main() {
    int m, n;
    float num;
    string nam;

    cin >> n >> m;

    vector <data> ppl;

    for(int i = 0; i < n; i++) {
        cin >> nam >> num;

        if(nam != "Nark") {
            data aux;
            aux.nome = nam;
            aux.numb = num;
            ppl.push_back(aux);
        }
    }

    stable_sort(ppl.begin(), ppl.end(), cmp);

    for(vector<data>::iterator it=ppl.begin(); it != ppl.begin()+m; it++) {
        cout << it->nome  << endl;
    }
}
