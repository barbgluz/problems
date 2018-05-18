#include  <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int participantes, rounds, i, line, comando, j, execucao, k, posicaoatual, teste, l;
    teste = 0;
    do{
         
        cin>>participantes>>rounds;
        if(participantes != 0 && rounds != 0){
            
            int fila[participantes];
            
            for(i = 0; i < participantes; i++){
                cin>>fila[i];
            }
             
            for(i = 0; i < rounds; i++){
                cin>>line>>comando;
                posicaoatual = 0;
                
                for(j = 0; j < line; j++){
                    cin>>execucao;
                    if(execucao != comando){
                        for(k = posicaoatual; k < line; k++){
                            fila[k] = fila[k+1];
                        }
                    }

                    else{
                        posicaoatual++;
                    }
                }
            }
        cout<<"Teste "<<++teste<<endl<<fila[0]<<endl;
        }
         
    }while(participantes != 0 && rounds !=0);
     
     
     
     
    return 0;
}