#include <iostream>
#include <stack>
#include <string.h>
#include <stdio.h>

using namespace std;

int lanca(stack <char> *p);

int main(){
    int n = 0, i = 0, acertou;

    cin>>n;
    cin.ignore(); // Alteração aqui.

    for ( i = 0; i < n; i++){
        stack <char> p;
        acertou = lanca(&p);
        if(acertou && p.empty())
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;
    }

}

int lanca(stack <char> *p){
    int j;
    string exp;
    getline(cin, exp);
    // cout<<exp.size()<<endl;
    for (j = 0; j < exp.size(); j++){
        switch (exp[j]){
            case '}':
                if(!p->empty() && p->top() == '{')
                    p->pop();
                else
                    return 0;
                break;
            case ']':
                if(!p->empty() && p->top() == '[')
                    p->pop();
                else
                    return 0;
                break;
            case ')':
                if(!p->empty() && p->top() == '(')
                    p->pop();
                else
                    return 0;
                break;
            default:
                p->push(exp[j]);
                break;
        }
    }
    return 1;
}
