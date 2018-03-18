#include <stdio.h>
#include <stdlib.h>

void potencia(int* total, int val1, int val2){
	
	int count;
	for(count = 0; count < val2; count++){
		*total = *total * val1;
		printf("TOTAL: %d\n", *total);
	}
}

int main(){
	
	int total = 1;

	potencia(&total, 10, 5);
}