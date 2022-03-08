#include <stdio.h>
#include <stdlib.h>

void print_binary(int number, int nr_bits)
{
	printf("0b");
	for(int i = nr_bits / 4 - 1; i >= 0; --i) {
		int k = number >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
}

void check_parity(int *numbers, int n)
{
	for(int i = 0; i < n; ++i) {
		if(!(*(numbers + i) & 1)) {
			print_binary(*(numbers + i), 32);
			printf("\n");
		}
		else {
			printf("0x");
			printf("%x", *(numbers + i));
			printf("\n");
		}
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int *v = malloc(n * sizeof(int));
	int i = 0;
	while(i < n) {
		scanf("%d", v + i);
		++i;
	}
	check_parity(v, n);
	return 0;
}

