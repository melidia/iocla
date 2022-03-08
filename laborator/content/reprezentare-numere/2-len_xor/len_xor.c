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

void equality_check(const char *str)
{
	(void) str;
	int len = my_strlen(str);
	for(int i = 0; i < len; ++i) {
		if(!(*(str + i) ^ *(str + (i + (1<<i))%len))) {
			printf("%p\n", str + i);
		}
	}
}

int main(void)
{
	equality_check("mamaaremere");

	return 0;
}

