#include <iostream>
using namespace std;
const int MAX_ALUNOS = 1000;
int main(){

  int i, indice_melhor, n, nota_melhor;
  int turma=1;
  struct
  {
    int codigo, media;
  } alunos[MAX_ALUNOS];
  // le numero de alunos da primeira turma
  while (cin>>n && n != 0){
      // le dados dos alunos
      for (i = 0; i < n; i++)
         cin >> alunos[i].codigo >> alunos[i].media;
      // procura aluno de maior media
      indice_melhor = 0;
      for (i = 1; i < n; i++)
         if (alunos[i].media > alunos[indice_melhor].media){
             indice_melhor = i;
         }
      nota_melhor = alunos[indice_melhor].media;
      // escreve resposta
      cout << "Turma " << turma++ << "\n";
      for ( i = 0; i < n; ++i){
        if( alunos[i].media == nota_melhor ){
          cout << alunos[i].codigo << " ";
        }
      }
      cout<<endl;
    }
  return 0;
}