#include <stdio.h>


void rotate_left(int *number, int bits)
{
	(void) number;
	(void) bits;
	*number = (*number << bits) | (*number >> (32 - bits));

}

void rotate_right(int *number, int bits)
{
	(void) number;
	(void) bits;
	*number = (*number >> bits) | (*number << (32 - bits));
}

int main()
{
	int n, b;
	scanf("%d %d", &n, &b);
	rotate_right(&n, b);
	printf("%d", n);


	return 0;
}