#include <stdio.h>

int soma(int nums[3], int size){
	int i;
	int total = 0;
	for(i = 0; i < size; i++){
		total = total + nums[i];
	}
	return total;
}

int main() {
	int nums[3];

	nums[0] = 10;
	nums[1] = 20;
	nums[2] = 30;

	int total = soma(nums, 3);
	printf("O total é: %d\n", total);
}