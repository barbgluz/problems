#include <stdio.h>

int main(){
	int n = 0, k = 0, i = 0, p = 0, menor = 1000001;

	scanf("%d", &n);
	scanf("%d", &k);

	int aux[k];
 	for (i = 0; i < k; i++){
		aux[i] = 0;
	}

	for (i = 0; i < n; i++){
		scanf("%d", &p);
		aux[p-1]++;
	}

	for (i = 0; i < k; i++){
		if( aux[i] < menor ){
			menor = aux[i];
		}
	}

	printf("%d\n", menor);

	return 0;
}