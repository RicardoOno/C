#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int sec = time(0);
	printf("%d\n", sec );
	srand(sec);

	int n1 = rand();
	int n2 = rand();

	printf("%d | %d\n", n1, n2);
}