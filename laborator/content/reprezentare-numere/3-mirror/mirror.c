#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	(void) str;
	int c = 0;
	if(str != NULL) {
		while(*str != '\0') {
			c++;
			str++;
		}
	return c;
	}
	return -1;
}

void mirror(char *s)
{
	(void) s;
	int t = my_strlen(s);
	int i = 0;
	while(i <= t >> 2) {
		char v = *(s + i);
		*(s + i) = *(s + t - i - 1);
		*(s + t - i - 1) = v;
		i++;
	}
}

int main()
{
	char sir[1000];
	scanf("%s", sir);
	mirror(sir);
	printf("%s", sir);
	return 0;
}

