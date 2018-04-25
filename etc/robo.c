#include <stdio.h>

int main() {

    int N, M, S;
    int pos1, pos2, prox_pos1, prox_pos2;


    scanf("%d %d %d", &N, &M, &S);
    while( N!=0 && M!=0 && S!=0) {
        int figurinhas = 0;
        char mat[N+2][M+2];
        char vet[S];

        for (int j = 0; j < M+2; j++){
            mat[0][j] = '#';
            mat[N+1][j] = '#';
        }
        for (int j = 0; j < N+2; j++){
            mat[j][0] = '#';
            mat[j][M+1] = '#';
        }

        for (int i = 1; i < N+1; i++) {
            for (int j = 1; j < M+1; j++){
               scanf(" %c", &mat[i][j]);
               if(mat[i][j] == 'N'){
                    pos1 = i;
                    pos2 = j;
                    prox_pos1 = i-1;
                    prox_pos2 = j;
                }
                else if(mat[i][j] == 'O'){
                    pos1 = i;
                    pos2 = j;
                    prox_pos1 = i;
                    prox_pos2 = j-1;
                }
                else if(mat[i][j] == 'L'){
                    pos1 = i;
                    pos2 = j;
                    prox_pos1 = i;
                    prox_pos2 = j+1;
                }
                else if(mat[i][j] == 'S'){
                    pos1 = i;
                    pos2 = j;
                    prox_pos1 = i+1;
                    prox_pos2 = j;
                }
            }
        }

        
            for(int i=0; i<S; i++) {
                scanf(" %c", &vet[i]);

                if(vet[i]=='D'){
                    //printf ("entrei no D\n");
                    if(pos1 == prox_pos1 + 1 && pos2 == prox_pos2){prox_pos1 = pos1; prox_pos2 = pos2 + 1;}// norte para leste
                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 + 1){prox_pos1 = pos1 -1; prox_pos2 = pos2;} // oeste para norte
                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 - 1){prox_pos1 = pos1 +1; prox_pos2 = pos2;} // leste para sul
                    else if(pos1 == prox_pos1 - 1 && pos2 == prox_pos2){prox_pos1 = pos1; prox_pos2 = pos2 - 1;} // sul para oeste
                }
                else if(vet[i]=='E'){
                    //printf ("entrei no E\n");
                    if(pos1 == prox_pos1 + 1 && pos2 == prox_pos2){prox_pos1 = pos1; prox_pos2 = pos2 - 1;}// norte para oeste
                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 + 1){prox_pos1 = pos1 +1; prox_pos2 = pos2;} // oeste para sul
                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 - 1){prox_pos1 = pos1 -1; prox_pos2 = pos2;} // leste para norte
                    else if(pos1 == prox_pos1 - 1 && pos2 == prox_pos2){prox_pos1 = pos1; prox_pos2 = pos2 + 1;} // sul para leste
                }
                else if(vet[i]=='F'){
                    //printf ("entrei no F\n");
                    if(pos1 == prox_pos1 + 1 && pos2 == prox_pos2){// norte para norte
                        if(mat[prox_pos1][prox_pos2]!='#'){
                            pos1 = prox_pos1;
                            pos2 = prox_pos2;
                            prox_pos1 = prox_pos1 - 1;
                            prox_pos2 = prox_pos2;
                            if(mat[pos1][pos2]=='*'){
                                figurinhas++;
                                mat[pos1][pos2] = '.';
                            }
                        }
                    }

                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 + 1){ // oeste para oeste
                        if(mat[prox_pos1][prox_pos2]!='#'){
                            pos1 = prox_pos1;
                            pos2 = prox_pos2;
                            prox_pos1 = prox_pos1;
                            prox_pos2 = prox_pos2 - 1;
                            if(mat[pos1][pos2]=='*'){
                                figurinhas++;
                                mat[pos1][pos2] = '.';
                            }
                        }
                    }

                    else if(pos1 == prox_pos1 && pos2 == prox_pos2 - 1){ // leste para leste
                        if(mat[prox_pos1][prox_pos2]!='#'){
                            pos1 = prox_pos1;
                            pos2 = prox_pos2;
                            prox_pos1 = prox_pos1;
                            prox_pos2 = prox_pos2 + 1;
                            if(mat[pos1][pos2]=='*'){
                                figurinhas++;
                                mat[pos1][pos2] = '.';
                            }
                        }
                    }

                    else if(pos1 == prox_pos1 - 1 && pos2 == prox_pos2){ // sul para sul
                        if(mat[prox_pos1][prox_pos2]!='#'){
                            pos1 = prox_pos1;
                            pos2 = prox_pos2;
                            prox_pos1 = prox_pos1 + 1;
                            prox_pos2 = prox_pos2;
                            if(mat[pos1][pos2]=='*'){
                                figurinhas++;
                                mat[pos1][pos2] = '.';
                            }
                        }
                    }
                }
            }
        

        printf("%d\n", figurinhas);
        // for (int i = 1; i < N+1; i++){
        //     for (int j = 1; j < M+1; j++){
        //         printf("%c", mat[i][j]);
        //     }
        //     printf("\n");
        // }
        scanf("%d %d %d", &N, &M, &S);
    }
}