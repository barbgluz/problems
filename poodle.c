#include <stdio.h>

int main() {
    int n, p, o;

    while ((scanf("%d", &n) && scanf("%d", &p)) && (n!=0 && p!=0) ) {
        if (n%p == 0) {
            o = n/p;
        } else {
            o = (n/p)+1;
        }

        if (o < 6) {
            printf("P%.*sdle\n", 2, "oooooooooooooooooooo");
        }
        else if (o > 20) {
            printf("P%.*sdle\n", 16, "oooooooooooooooooooo");
        }
        else {
            printf("P%.*sdle\n", o-4, "oooooooooooooooooooo");
        }
    }
}
