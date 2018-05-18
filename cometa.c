#include <stdio.h>

int main(){
    int ano = 0, prox = 0;

    scanf("%d", &ano );

    if ( ((ano-10)%76) == 0 ){
        prox = ano+76;
    }

    else {
        prox = ( ( ((ano-10)/76) *76) + 86 );
    }

    printf("%d\n", prox);

}
