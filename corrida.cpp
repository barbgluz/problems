#include <iostream>
using namespace std;

int main(){
	int n = 0, m = 0, i = 0, j = 0, menor = 0, aux = 0;

	cin>>n>>m;

	int tempo[n][m], total[n], ordem[n];

	//entrada de dados
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			cin>>tempo[i][j];
		}
	}

	//total recebe os dados
	for (i=0; i < n; i++){
		for (j=0; j < m; j++){
			if(j == 0){
				total[i] = tempo[i][j];
			}
			else 
				total[i] += tempo[i][j];
		}
	}

	for ( i = 0; i < n; i++){
		ordem[i] = total[i];
	}

	//ordenação
	for(j = 0; j < n-1; j++){
        menor = j;
        for (i = j+1; i < n; i++){
            if(ordem[i] < ordem[menor]){
                menor = i;
            }
        }

        aux = ordem[j];
        ordem[j] = ordem[menor];
        ordem[menor] = aux;
    }

    //saída
	for ( i = 0; i < 3; i++){
		for ( j = 0; j < n; j++){
			if( ordem[i] == total[j] ){
				cout<<j+1<<endl;
			}
		}
	}
}