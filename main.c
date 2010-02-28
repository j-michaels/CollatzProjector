#include <stdio.h>

void collantz(int n) {
	printf(" %d",n);
	if (n <= 1) return;
	if (n % 2 == 0) {
		collantz(n/2);
	} else {
		collantz((3 * n) + 1);
	}
}

int main() {
	int i;
	for (i = 100000; i < 1000000; i++) {
		collantz(i);
		printf("\n");
	}
	return 0;
}
