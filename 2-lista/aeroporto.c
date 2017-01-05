#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int aero, voos, i, x, y, maior, mais_movimentados_i, teste;
	int mais_movimentados[1000];
	teste = 0;
	do{
		
		teste ++;
		scanf("%d %d", &aero, &voos);
		if(aero != 0 && voos != 0){
			
			int aeroportos_vezes[aero];
			for(i = 0; i < aero; i++){
				aeroportos_vezes[i] = 0;
			}
		
		
			for(i = 0; i < voos; i++){
				scanf("%d %d", &x, &y);
				aeroportos_vezes[x - 1] = aeroportos_vezes[x - 1] + 1;
				aeroportos_vezes[y - 1] = aeroportos_vezes[y - 1] + 1;
			}
			
			// checar quanto e o maior
			// 1 2 3
			// 5 1 0
			maior = 0;
			for(i = 0; i < aero; i++){
				if(aeroportos_vezes[i] > maior) maior = aeroportos_vezes[i];
			}
			mais_movimentados_i = 0;
			for(i = 0; i < aero; i++){
				if(aeroportos_vezes[i] == maior){
					mais_movimentados[mais_movimentados_i] = i;
					mais_movimentados_i++;
				}
			}
			printf("Teste %d\n", teste);
			for(i = 0; i < mais_movimentados_i; i++){
				printf("%d ", mais_movimentados[i] + 1);
			}
			printf("\n\n");
		}
		
	}while(aero!=0 && voos!=0);
	return 0;
}