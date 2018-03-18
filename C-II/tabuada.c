#include <stdio.h>

void open(int* m){
	printf("Tabuada do %d\n\n", (*m));
	printf("OPEN: %d\n\n", &m);
}

int main(){
	int multi = 2;
	int i;
	
	printf("MAIN: %d\n\n", &multi);
	open(&multi);
	printf("MAIN 2: %d\n", &multi);

	for (i = 0; i < 10; ++i)
	{
		printf("%d x %d = %d\n", multi, i, multi * i);
	}
}