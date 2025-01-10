#include <stdio.h>
#define MAX_STR 80

int islower(char c) { return c >= 'a' && c <= 'z'; }

char* primeiro_maiusculas(char* str) {

	char* ptr = str;

	while (*ptr != '\0') {
		char anterior = *(ptr - 1);
		int is_min = islower(*ptr);
		if (is_min && (anterior == ' ' || ptr == str))
			*ptr -= 32;
		ptr++;
	}

	return str;
}

int main() {

	char frase[MAX_STR];
	printf(" Introduza uma frase (max : %d): ", MAX_STR);
	fgets(frase, MAX_STR - 1, stdin); // -1 -> \0
	printf(" resultado : %s\n", primeiro_maiusculas(frase));

}