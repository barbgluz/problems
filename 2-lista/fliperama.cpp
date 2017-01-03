#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int i = 0, j = 0, partidas = 0, maior = 0, aux = 0, linhas = 0;

    cin>>partidas>>linhas;

    int pontos[partidas];

    for(i = 0; i < partidas; i++){
        cin>>pontos[i];
    }

    for(j = 0; j < partidas-1; j++){
        maior = j;
        for (i = j+1; i < partidas; i++){
            if(pontos[i] > pontos[maior]){
                maior = i;
            }
        }

        aux = pontos[j];
        pontos[j] = pontos[maior];
        pontos[maior] = aux;
    }

    for (i=0; i < linhas-1; i++){
        printf("%d\n", pontos[i]);
    }

    printf("%d\n", pontos[i]);

    return 0;
}
