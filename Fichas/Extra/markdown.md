Aqui está o conteúdo extraído e formatado sobre **apontadores e passagem de vetores para funções**:

---

## Passagem de Vetores para Funções

### Conceito:
- Em C, um vetor ocupa um bloco **contíguo de memória**, sendo o seu **endereço o endereço do primeiro byte**.
- Ao passar um vetor para uma função:
  - **Não é o conteúdo do vetor** que é passado.
  - É passado **apenas o endereço inicial** do vetor.
  
Por isso, o parâmetro formal da função pode ser declarado como **apontador**.

---

### Exemplo 1: Passagem de Vetor para Função
```c
#include <stdio.h>

void funcao(float *p) {
    p[0] = 1.5;  // Modifica o primeiro elemento
    p[1] = 2.25; // Modifica o segundo elemento
}

int main() {
    float v[5] = {2.1, 3.8, 1.7, -2.6, 6.9};
    
    // Antes de chamar a função
    printf("1º elemento: %.2f  2º elemento: %.2f\n", v[0], v[1]);
    
    funcao(v);  // Equivalente a funcao(&v[0])
    
    // Após chamar a função
    printf("1º elemento: %.2f  2º elemento: %.2f\n", v[0], v[1]);
    
    return 0;
}
```

**Saída do Programa:**
```
1º elemento: 2.10  2º elemento: 3.80
1º elemento: 1.50  2º elemento: 2.25
```

---

## Funções Implementadas com Apontadores

Exemplo de funções que manipulam *strings* com apontadores:

### 1. Concatenação de Strings (`mystrcat`)
```c
void mystrcat(char *s1, char *s2) {
    while (*s1 != '\0') s1++;      // Avança até o final de s1
    while (*s2 != '\0') *s1++ = *s2++; // Copia s2 para o final de s1
    *s1 = '\0';                   // Adiciona o terminador
}
```

### 2. Comparação de Strings (`mystrcmp`)
```c
int mystrcmp(char *s, char *t) {
    while (*s == *t && *s != '\0') {
        s++;
        t++;
    }
    return *s - *t; // Retorna a diferença entre os caracteres
}
```

### 3. Busca de Carácter numa String (`mystrchr`)
```c
char *mystrchr(char *s, char ch) {
    while (*s != ch && *s != '\0') s++; // Avança até encontrar o carácter
    return (*s == '\0') ? NULL : s;     // Retorna NULL se não encontrado
}
```

---

## Apontadores para Apontadores

- Em C, é possível criar **apontadores que apontam para outros apontadores**.
- Exemplo:
```c
char ch = 'A', *pch = &ch;
char **ppch = &pch; // ppch aponta para pch
```

### Acessos:
- `ch` → Valor direto: `'A'`.
- `*pch` → Valor no endereço apontado por `pch`: `'A'`.
- `**ppch` → Valor no endereço apontado por `ppch`: `'A'`.

---

## Apontadores para Funções

As funções, embora não sejam variáveis, também possuem endereços, que podem ser armazenados em **apontadores para funções**.

### Declaração de Apontador para Função:
```c
tipo_de_retorno (*nome_apontador)(tipo_parametros);
```

### Exemplo:
```c
#include <stdio.h>
#include <math.h>

int main() {
    double (*ptr)(double); // Apontador para função que devolve um double
    ptr = sqrt;           // Atribui o endereço da função sqrt
    printf("Raiz de 16: %.2f\n", (*ptr)(16.0)); // Invoca sqrt usando ptr
    return 0;
}
```

---

## Passagem de Parâmetros por Valor e por Referência

### Conceitos:
1. **Passagem por Valor:**
   - É enviada uma **cópia** do argumento para a função.
   - Alterações ao parâmetro **não afetam** o valor original.

2. **Passagem por Referência:**
   - É passado o **endereço** da variável.
   - A função pode **alterar o valor original**.

---

### Exemplo: Troca de Valores com Apontadores
```c
#include <stdio.h>

void troca(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a = 10, b = 20;
    printf("Antes da troca: a = %d, b = %d\n", a, b);
    troca(&a, &b); // Passa os endereços de a e b
    printf("Depois da troca: a = %d, b = %d\n", a, b);
    return 0;
}
```

**Saída:**
```
Antes da troca: a = 10, b = 20
Depois da troca: a = 20, b = 10
```

---

### Passagem de Vetores e Strings para Funções
O endereço do início do vetor ou da string é passado para a função. Isto é semelhante ao conceito de passagem de referência.

Exemplo com `printf` e `scanf`:
```c
#include <stdio.h>

int main() {
    char str[50];
    printf("Digite uma palavra: ");
    scanf("%s", str); // Passa o endereço do vetor
    printf("Você digitou: %s\n", str);
    return 0;
}
```

---

Se necessitares de mais explicações ou exemplos, avisa! 😊