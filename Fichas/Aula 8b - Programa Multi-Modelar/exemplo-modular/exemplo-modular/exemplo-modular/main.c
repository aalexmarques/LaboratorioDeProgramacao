#include <stdio.h>

// 2.a)
char isnull(char* str) {
    return str[0] == '\0';
}

// 2.b)
int strlen(char* str) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// 2.c)
char* strlwr(char* str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}

// 2.d)
char* strupr(char* str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

// 2.e)
int strcountc(char* str, char c) {
    int i, cnt = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            cnt++;
    }
    return cnt;
}

// 2.f)
int indchr(char* str, char c) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return i;
    }
    return -1; // nao foi encontrado
}

// 2g)
// Devolve TRUE (1) se c nao for um 'white char'
char iswhite(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

char* trimright(char* str) {
    int i;
    // comecar no final da string ate' ao inicio
    // ate encontrar o 1.o char 'not white'
    for (i = strlen(str) - 1; i >= 0; i--) {
        if (!iswhite(str[i])) {
            // terminar a string imediatamente a seguir...
            str[i + 1] = '\0';
            return str;
        }
    }
    return str;
}

// 2.h(
char* trimleft(char* str) {
    int o, first = 0;
    // encontrar o offset (o) do 1.o char 'not white'
    for (o = 0; str[o] != '\0' && iswhite(str[o]); o++);
    if (o > 0) {
        int i = 0;
        while (str[o] != '\0')
            str[i++] = str[o++];
        str[o] = '\0';
    }
    return str;
}

// 2.i)
char* strcpy(char* dest, char* src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

// 2.j)
char* strcat(char* dest, const char* src) {
    int i, len = strlen(dest);
    for (i = 0; src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}

// 2.k)
char palindrome(char* str) {
    int i, length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1])
            return 0;
    }
    return 1; // true
}

// 2.l)
char strcmp(char* s1, char* s2) {
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return s1[i] - s2[i];
}

// 2.m)
char lower_char(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else
        return c;
}

char stricmp(char* s1, char* s2) {
    int i;
    for (i = 0; lower_char(s1[i]) == lower_char(s2[i]) && s1[i] != '\0'; i++);
    return lower_char(s1[i]) - lower_char(s2[i]);
}

// 2.n)
char* strdelc(char* str, char c) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return str;
}

int main() {
    // 2a
    char ex2a[] = "";
    printf("2.a) isnull(%s) = %d\n", ex2a, isnull(ex2a));

    // 2b
    char ex2b[] = "Uma string";
    printf("2.b) strlen(%s) = %d\n", ex2b, strlen(ex2b));

    // 2c
    char ex2c[] = "UmAsTrInG";
    printf("2.c) strlwr(%s) = %s\n", ex2c, strlwr(ex2c));

    // 2d
    char ex2d[] = "UmAsTrInG";
    printf("2.d) strpur(%s) = %s\n", ex2d, strupr(ex2d));

    // 2e
    char ex2e[] = "Em busca do caractere";
    printf("2.e) strcountc(%s, c) = %d\n", ex2e, strcountc(ex2e, 'c'));

    // 2f
    char ex2f[] = "Em busca do index";
    printf("2.f) indchr(%s, i) = %d\n", ex2f, indchr(ex2f, 'i'));

    // 2g
    char ex2g[] = "remove estes espacos ->       ";
    printf("2.g) [%s]\n", trimright(ex2g));

    // 2h
    char ex2h[] = "          <-   remove estes espacos";
    printf("2.h) [%s]\n", trimleft(ex2h));

    // 2i
    char ex2i[12];
    printf("2.i) [%s]\n", strcpy(ex2i, "Fui copiado"));

    // 2j
    char ex2j1[16] = "Fui ";
    char ex2j2[] = "concatenado";
    printf("2.j) [%s]\n", strcat(ex2j1, ex2j2));

    // 2k
    char ex2k[] = "arara";
    printf("2.j) palindrome(%s) = %d\n", ex2k, palindrome(ex2k));

    // 2l
    printf("2.l) strcmp(aa, ab) = %d\n", strcmp("aa", "ab"));
    printf("2.l) strcmp(aa, aa) = %d\n", strcmp("aa", "aa"));
    printf("2.l) strcmp(ab, aa) = %d\n", strcmp("ab", "aa"));

    // 2m
    printf("2.m) stricmp(AA, ab) = %d\n", stricmp("AA", "ab"));
    printf("2.m) stricmp(AA, aa) = %d\n", stricmp("AA", "aa"));
    printf("2.m) stricmp(AB, aa) = %d\n", stricmp("AB", "aa"));

    // 2n
    char ex2n[] = "S k y w a l k e r";
    printf("2.n) [%s]\n", strdelc(ex2n, ' '));
}
