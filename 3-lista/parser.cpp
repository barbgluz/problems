#include <iostream>
#include <stack>
using namespace std;

#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>

using namespace std;

int lanca(stack <char> *p);

int main(){
    int n = 0, i = 0, j = 0, cont = 0, acertou;

    cin>>n;
    cin.ignore(); // Alteração aqui.
    stack <char> pilha;

    for ( i = 0; i < n; i++){
        acertou = lanca(&pilha);
        if(acertou && pilha.empty())
            cont++;
    }

    if (cont == n)
        cout<<"C"<<endl;
    else
        cout<<"E"<<endl;

}

int lanca(stack <char> *pilha){
    int j;
    string frase;
    getline(cin, frase);
    // cout<<frase.size()<<endl;
    for (j = 0; j < frase.size(); j++){
        switch (frase[j]){
            case '*':
                if(!pilha->empty() && pilha->top() == '*')
                    pilha->pop();
                else
                    pilha->push(frase[j]);
                break;
            case '/':
                if(!pilha->empty() && pilha->top() == '/')
                    pilha->pop();
                else
                    pilha->push(frase[j]);
                break;
            case '_':
                if(!pilha->empty() && pilha->top() == '_')
                    pilha->pop();
                else
                    pilha->push(frase[j]);
                break;
        }
    }
    return 1;
}
