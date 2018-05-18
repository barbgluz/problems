#include <iostream>

using namespace std;

int main(){
	int aero = 0, voos = 0, maior = 0, i = 0, a = 0, b = 0, movimentado = 0, aux = 0;
	int maismov[1000];

	while(cin>>aero>>voos && aero!=0 && voos != 0){
		aux++;
		int frequencia[aero];
		for(i = 0; i < aero; i++){
			frequencia[i] = 0;
		}
	
	
		for(i = 0; i < voos; i++){
			cin>>a>>b;
			frequencia[a - 1] = frequencia[a - 1] + 1;
			frequencia[b - 1] = frequencia[b - 1] + 1;
		}

		maior = 0;
		for(i = 0; i < aero; i++){
			if(frequencia[i] > maior) maior = frequencia[i];
		}
		movimentado = 0;
		for(i = 0; i < aero; i++){
			if(frequencia[i] == maior){
				maismov[movimentado] = i;
				movimentado++;
			}
		}
		cout<<"Teste "<<aux<<endl;
		for(i = 0; i < movimentado; i++){
			cout<<maismov[i] + 1<<" ";
		}
		cout<<endl<<endl;
	}
}			