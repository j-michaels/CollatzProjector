#include <stdio.h>

void collatz(int n) {
	printf(" %d",n);
	if (n <= 1) return;
	if (n % 2 == 0) {
		collatz(n/2);
	} else {
		collatz((3 * n) + 1);
	}
}

int main() {
	int i;
	for (i = 100000; i < 1000000; i++) {
		collatz(i);
		printf("\n");
	}
	return 0;
}
