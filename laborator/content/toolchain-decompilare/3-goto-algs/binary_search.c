#include <stdio.h>

int main(void)
{
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = v[2]; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;



WHILEEE:
	int m = start + (end - start)/2;
	if(v[m] == dest)
		return v[m];
	else 
		goto CONDITIONSS

CONDITIONSS1:
	if(v[m] < dest)
		start = m + 1;
	else
		goto CONDITIONSS2

CONDITIONSS2:
	if(v[m] > dest)
		end = m + 1;

COMPARE:
	if(start <= end)
		goto WHILEEE


	/* TODO: Implement binary search */
	(void) dest;
	(void) start;
	(void) end;
}
