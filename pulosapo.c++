#include <iostream>
using namespace std;

int main(){
	int pedras = 0, sapos = 0, guarda = 0, recuo = 0, avanco = 0, i = 0, s = 0;

	cin>>pedras>>sapos;

	int sapo[2], pedra[pedras];

	for (i = 0; i < sapos; i++){
		for ( s = 0; s < 2; s++){
			cin>>sapo[s];
		}

		guarda = sapo[0];
		pedra[guarda-1] = 1;

		recuo = sapo[0]-sapo[1];
		if (recuo > 0){
			do{
				pedra[recuo-1] = 1;
				recuo = recuo - sapo[1];
			} while (recuo > 0);
		}

		avanco = sapo[0] + sapo[1];
		if(avanco < pedras){
			do {
				pedra[avanco-1] = 1;
				avanco = avanco + sapo[1];
			} while(avanco < pedras);
		}

		if(avanco == pedras){
			pedra[avanco-1] = 1;
		}
	}

	for ( i = 0; i < pedras; i++){
		if (pedra[i] != 1){
			pedra[i] = 0;
		}
	}

	for ( i = 0; i < pedras; i++){
		cout<<pedra[i]<<endl;
	}
}