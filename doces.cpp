#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    char meia;
    stack <char> pilha;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> meia;

        if(i == 0 && meia == 'D') {
            cout << "nao" << endl;
            return 0;
        } else {
            if (meia == 'E') {
                pilha.push(meia);
            } else if (!pilha.empty()) {
                pilha.pop();
            } else {
                cout << "nao" << endl;
                return 0;
            }
        }
    }

    if(pilha.empty()) {
        cout << "sim" << endl;
    } else {
        cout << "nao" << endl;
    }
}
