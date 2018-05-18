#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int i = 0, j = 0, n = 0, maior = 0, sorteado = 0;

    cin>>n>>sorteado;

    string alunos[n], aux, swap;

    for(i = 0; i < n; i++){
        cin>>alunos[i];
    }

    for(j = 0; j < n-1; j++){
        maior = j;
        for (i = j+1; i < n; i++){
            if(alunos[i] < alunos[maior]){
                maior = i;
            }
        }

        aux = alunos[j];
        alunos[j] = alunos[maior];
        alunos[maior] = aux;
    }

    cout<<endl;
    // for (i=0; i < n; i++){
    //     cout<<alunos[i]<<endl;
    // }

    cout<<alunos[sorteado-1]<<endl;

    // printf("%c\n", alunos[i]);

}
