#include <stdio.h>

int main() {
    int n, i, j, z, total, t = 0;

    while (scanf("%d", &n) && n != 0) {
        total = 0;
        printf("Teste %d\n", ++t);

        for (i=0; i < n; i++) {
            scanf("%d %d", &j, &z);

            if( (j > 100 || j < 0) || (z > 100 || z < 0)) {
                return 0;
            }

            total += j-z;
            printf("%d\n", total);
        }
        printf("\n");
    }
    return 0;
}
