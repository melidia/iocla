#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	int len1 = strlen(s);
	int len2 = strlen(pattern);
	int poz;
	int found = 0;
	for(int i = 0; i <= len1 - len2; ++i){
		found = 1;
		poz = i;
		for(int j = i; j < i + len2; ++j){
			if(s[j] != pattern[j - i]){
				found = 0;
				poz = -1;
				break;
			}
		}
	if(found == 1)
		break;
	}
	if(found == 0)
		return s;
	else {
	char *t = malloc(len1 - len2);
	for(int i = 0; i < poz; ++i)
		t[i] = s[i];
	for(int i = poz + len2; i < len1; ++i)
		t[i - len2] = s[i];
	return t;
}
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";
	printf("%s\n", delete_first(s, pattern));

	return 0;
}