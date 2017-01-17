#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    int n = 0, i = 0, j = 0, a = 0;
    stack <char> atual;
    stack <char> prox;
    string exp;

    cin>>n;
    cin.ignore(); // Alteração aqui.

    for ( i = 0; i < n; i++){
        getline(cin, exp);
        cout<<exp.size()<<endl;
        for (j = 0; j < exp.size(); j++){
            switch (exp[j]){

            }

            if(atual.empty() && prox.empty())
                cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
        }

    }

}
