#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char vetor[][21], int s) {
   int k,l;
   char temp[21];
   for(k=1 ; k < s ; k++) {
        strcpy(temp, vetor[k]);
        l=k-1;
        while((strcmp(temp, vetor[l]) < 0) && (l>=0)) {
            strcpy(vetor[l+1], vetor[l]);
            l--;
        }
        strcpy(vetor[l+1], temp);
    }
}

int main() {
    int s, i, j;
    char nome[21];

    scanf("%d%d", &s, &i);
    char vetor[s][21];

    for(j=0; j<s; j++) {
        scanf(" %[^\n]s", nome);
        strcpy(vetor[j], nome);
    }
    
    sort(vetor, s);
    printf("%s\n", vetor[i-1] );
}