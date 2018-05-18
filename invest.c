#include <stdio.h>

int invest(int n, int k);

int main() {
	int n, k;

	while(scanf("%d%d", &n, &k) && ((n!=0) && (k!=0))) {
		printf("%d\n", invest(n, k));
	}
}

int invest(int n, int k) {
	if ((n < k) || (n == k)) {
		return 1;
	} else {
		if (n%2 != 0) {
			return invest(((n/2)+1), k) + invest((n/2), k);
		} else {
			return invest((n/2), k) + invest((n/2), k);
		}
	}
}
