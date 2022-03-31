#include <stdio.h>

int main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max;
	int i;

	int dim = sizeof(v)/sizeof(v[0]);
	max = v[0];
	i = 1;

MAXIM:
	if(v[i] >= max)
		max = v[i];
	i++;
	goto COMPARE;

COMPARE:
	if(i < dim)
		goto MAXIM;
		

	printf("%d", max);
	printf("\n");

	return 0;
}
