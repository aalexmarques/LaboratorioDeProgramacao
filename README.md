**Professor:**  Nelson Figueiredo | **Gabinete:** 13

**E-mail:** nfigueiredo@ipb.pt

# Índice

---

# Objetivos da Disciplina

- Ser capaz de estruturar um raciocínio que permita planear um algoritmo e implementá-lo na linguagem C, para problemas computacionais de média complexidade;

- Aplicar **Conhecimentos Fundamentais:**
    - usar diferentes tipos de dados
    - estruturas condicionais e iterativas
    - estruturar em programa em funções
    - compreender e explorar a passagem de parâmetros
    - saber processar *arrays* e *strings*

- Aplicar **Conhecimentos Avançados:**
    - utilizar apontadores e memória dinâmica
    - definir e utilizar estruturas e ficheiros
    - estruturar um programa em módulos.

# Programa da Disciplina

- **Conceitos Introdutórios:**
    - linguagens de programação imperativas
    - a linguagem C
    - fases de construção de um programa

- **Conhecimentos Fundamentais:**
    - usar diferentes tipos de dados e operações elementares:
        - constantes e variáveis;
        - atribuições;
        - operadores;
        - conversões de tipos;
        - definições de novos tipos;
        - entrada e saída de dados na consola.
        
    - *testar? e* estruturas condicionais:
        - instruções *if-else;*
        - instruções *switch;*
        
    - estruturas iterativas:
        - ciclos while, do-while e for.
        
    - funções:
        - conceito
        - declaração
        - passagem de parâmetros por valor
        - domínios de visibilidade
        
    - saber processar vetores*/arrays, strings e* arrays multidimensionais:
        - conceito
        - acesso
        - e operações
        

- **Conhecimentos Avançados:**
    - Apontadores:
        - conceito
        - aritmética
        - relação com funções
        
    - Ficheiros:
        - conceito
        - operações
        - e funções standard
        
    - Estruturas, uniões e enumerações:
        - conceito
        - e acesso
        
    - Memória Dinâmica:
        - conceito
        - operações
        - e funções standard
        
    - Modularização de Programas:
        
        

# Bibliografia ¯\_(ツ)_/¯

- [**https://pythontutor.com/**](https://pythontutor.com/)

---

- **Luís Damas**, “**Linguagem C**”, Tecnologias de Informação, FCA, 1999.

---

- **Pedro Guerreiro**, **“Elementos de Programação com C”**, *Tecnologias de Informação, FCA, 2006.*

---

- **António Rocha**, **“Introdução à Programação Usando C”**, *Tecnologias de Informação, FCA, 2006.*

---

- **K. N. King**, **“C Programming: A Modern Approach (2nd Ed.)”**, *W. W. Norton & Company, 2008.*

---

- **Brian W. Kernighan, Dennis M. Ritchie**, **“The C Programming Language”**, *Prentice-Hall, 1988.*

---

- **R. Johnsonbaugh, M. Kalin**, **“C for Scientists and Engineers”**, *Prentice-Hall, 1997.*

- e os pdfs 🤷

---

# Aula 1 - Conceitos Introdutórios *(25/09/2023)*

- linguagens de programação imperativas
- a linguagem C
- fases de construção de um programa

## Linguagens de programação:

**Para computadores darem resultados úteis é necessário dar-lhes ordens que estes deveram obedecer.** Estas ordens são representadas por uma série de instruções binárias 0s e 1s (0111010…) - Estas são as únicas instruções que um computador realmente entende designadas por **código máquina**.

Embora seja *possível* escrever um programa em **código máquina,** esta abordagem é *lenta* e *propensa a erros.* Para resolver estes problemas, foram desenvolvidas **linguagens de programação** que são mais próximas da língua humana. Categorizamos estas em *dois* níveis: *baixo nível, (médio nível)* e *alto nível*. 

- **Baixo Nível** → mais próxima do código de máquina (exemplos: Assembly, Fortan)
- **Alto Nível** → mais próxima da linguagem humana (exemplos: Python, Pascal (acho que js tmb mas não tenho a certeza)

É através destas linguagens que é escrito os programas que põem os computadores a funcionar e a estes chamamos de **programas fonte *(source program)***. 

As linguagens de programação são constituídas por conjuntos de palavras e símbolos que colocados segundo determinadas regras significam operações que serão realizadas pelo computador. A isto chamamos **código fonte *(source code)***.

- Exemplo de *código fonte* em *(linguagem)* C:
    
    ```c
    #include <stdio.h>
    
    int main() {
        printf("Olá, mundo!\n");
        return 0;
    }
    ```
    
    *^^^^ isto é código fonte (source code) ^^^^* 
    
    *(praticamente é só um termo para todo o código escrito em geral) 👍*
    
    O **código fonte** depois descreve as operações necessárias que o computador executará em **código máquina** *(binário)* para resolver ***X***  problema.
    

As **linguagens de programação** devem tanto que possível, apresentar as seguintes características:

- Vocabulário limitado;
- Regras gramaticais simples;
- Clareza e concisão;
- Facilidade de aprendizagem.

Uma **linguagem de programação** deve ser *compreensível para as pessoas*, e ao mesmo tempo, estar o mais *próximo* possível *da linguagem máquina*. Este nível de aproximação irá definir se está mais perto da linguagem de máquina *(baixo nível)* ou da linguagem humana (alto nível).

Nesta disciplina (PI/LP) iremos principalmente trabalhar com o C, é por muitos classificado como uma linguagem de médio nível, porque, para além de possuir instruções de **alto nível** *(como o Python, ~~Pascal~~)*, também possui instruções de **baixo nível** (assembly). Combinando assim as qualidades de uma linguagem de alto nível com a funcionalidade de uma linguagem de baixo nível.

## Tradutores *(Fases de construção de um programa)*

Para que um programa escrito em qualquer linguagem de programação possa ser executado ***é necessário traduzi-lo*** para a **linguagem máquina** *(binário)*, a única que o computador   *(realmente)* percebe. Esta tradução é realizada por um programa especial, designado por **tradutor ***(translator* ou *programming language processor)* existem 3 tipos de programas tradutores:

- **Assembladores** *(Assemblers)*
    - não é um compilador/compiler 
    Pega em Código Assembly e transforma em código binário (máquina)
- **Compiladores** *(Compilers)*
    - cria um executável a partir do código
    - *Faz a correção do código aka correção de syntax*
    - Tudo é traduzido duma só vez
    - por linguagem será necessário compiladores dedicados para a plataforma (Windows, Mac OS, Linux)
- **Interpretadores** *(Interpreters)*
    - não vai ser compilado para depois rodar o executável desse programa
    - para cada plataforma irá haver um interpretador mas o mesmo código será executado
    - Traduz executa tudo linha a linha
    - mais lento que um programa compilado

![Visualização gráfica da coisa toda ?-?](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/748de9e4-e757-454c-b28c-58f7e24bfc4f/Untitled.png)

Visualização gráfica da coisa toda ?-?

As linguagens que encontram mais perto do código de máquina são designadas por linguagens ***Assembly,*** o tradutor responsável por traduzir estas linguagens para ***código máquina*** é o ***Assembler** (Assemblador)**.***

A mesma lógica também aplica-se para linguagens de **alto nível**, um ***compilador*** traduz tudo duma só vez, enquanto um ***interpretador*** traduz e executa de imediato, uma a uma as instruções do programa fonte.

# Aula 2 (02/10/2023) (Incompleto)

### Diretivas para o pré-processor

#include /

#define /serve para fazer constantes globais

### Funções entrada e Saida

Entrada
Scanf “”
putchar ‘’ //input de um caracter

Saida 
printf 
getchar  //devolve um caracter

string de formatação e de controlo

string de controlo não utiliza os mesmos especificadores como a string de formatação 

scanf todas com %

printf com \\\ e %%%

caracter de formatção é preciso saber

int float/double char

short int long int

fazer cast (float) 
ira dar mais precisão

se

printf("Raiz de 2 = %.20f\n", sqrt(2));  //dá um numero inteiro o 2 é inteiro e dá um “output” com pouca precisão então temos que dar cast

output

Raiz de 2 = 1.41421356237309510000   sem cast fake float é um int
Raiz de 2 = 1.41421353816986080000    com cast float

endereço de memoria & é uma numero hexadecimal 👍

# Aula 3 (Incompleto)

### Tipos de Dados em C

Os principais tipos de dados em C são:

- int: Para números inteiros
- float: Para números de ponto flutuante (decimais) de precisão simples
- double: Para números de ponto flutuante de precisão dupla
- char: Para caracteres individuais

### Modificadores de Tipo

Os modificadores de tipo em C incluem:

- short: Reduz o tamanho de um int
- long: Aumenta o tamanho de um int ou double
- unsigned: Permite apenas valores não negativos

![image.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/7acdb135-d4a3-41af-b010-0eb0ccb4d996/image.png)

Cada dado em C tem associado um determinado **tipo**. O tipo define:

- O tamanho em **bytes** ocupado na memória
- A forma de **representação interna**
- O **intervalo de valores** que pode representar

Por exemplo, o tipo int tipicamente vai de -2.147.483.648 a +2.147.483.647 em sistemas de 32 bits.

Estes atributos podem variar dependendo do processador e do compilador utilizados.

### Caracteres Especiais

Alguns caracteres especiais não são acessíveis pelo teclado ou não têm um símbolo associado para representá-los. 

Estes devem ser escritos usando sequências de escape.

As sequências de escape são representadas por dois caracteres, começando sempre com uma barra invertida (`\`). Embora a representação use dois símbolos, o valor representado é apenas um único caractere.

É também possível representar qualquer caractere usando seu código ASCII:

• \ooo representa um caractere ASCII cujo número em octal é ooo (Exemplo: \101 representa a letra **A**)
• **\x**hh representa um caractere ASCII cujo número em hexadecimal é hh (Exemplo: **\x**5A representa a letra Z)

**Seq Escape** 

\a

\b

\f

\n

\r

\t

\v

\\

\?

\'

\"

**Carácter associado**

alert 

backspace

formfeed

newline

carriage return

horizontal tab

vertical tab

\

?

'

"

### Operadores e Conversões

Operadores em C:

- Operadores aritméticos:
    - + (adição)
    - - (subtração)
    - * (multiplicação)
    - / (divisão)
    - % (resto da divisão)
    
    - Operadores lógicos:
        - ! (NOT)
        - == (igual)
        - != (diferente)
        - > (maior que)
        - >= (maior ou igual)
        - < (menor que)
        - <= (menor ou igual)
        - && (AND lógico)
        - || (OR lógico)

- Operadores bit a bit:
    - << (shift left)
    - >> (shift right)
    - & (AND)
    - ^ (XOR)
    - | (OR)

- Outros operadores:
    - Operadores de atribuição (=, +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>=)
    - Operador condicional ternário (?:)
    - Operadores de incremento (++) e decremento (--)
    - Operador vírgula (,)
    - Operadores de acesso a membros (. e ->)

Conversão implícita: Ocorre automaticamente em certas situações, como na promoção de char para int.

```csharp
char c;
int n, i=256;
float f=3.6;
c=i; /* c fica com 0, pois 256=0000 0001 |0|000 0000 */
n=f; /* n fica com 3 */
```

Conversão explícita (cast): Usa-se a sintaxe (tipo)expressão, por exemplo (float)5 para converter um inteiro em float.

```csharp
int n; //declaracao
n = 30; //atribuição

(float) n;
```

### Operadores Bit-wise

Permitem realizar operações bit a bit em operandos do tipo inteiro:
• `&` (AND lógico)
• `|` (OR lógico)
• `^` (XOR - OR exclusivo)
• `~` (NOT - negação ou complemento)

Estes 4 primeiros operadores realizam operações lógicas conhecidas sobre cada um dos bits que constituem o operando.

• `>>` (deslocamento à direita)
• `<<` (deslocamento à esquerda)

Estes dois últimos operadores, podemos deslocar para a direita ou para a esquerda os bits do primeiro operando, tantas vezes quanto o valor expresso no segundo operando.

Em qualquer operação de deslocamento, o operando é alimentado por zeros de um lado, perdendo bits do outro

![Exemplo](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/44b5093b-e6f2-4042-9a1c-eb4a98ae0a9b/image.png)

Exemplo

### Operador Condicional (Operador Ternário)

Consegue subsitituir estruturas de controlo : if … then … else

`Condição ? Expressão1 : Expressão2`

se for verdadeira executa e devolve o valor da Expressão1,
se for falsa executa e devolve o valor da Expressão2.

# Aula 5a (Incompleto)

### Instruções de Controlo Fluxo Seleção

### Instruções de seleção Simples - if … else

forma simples:

```c
if (condição) instução;

//or 

if (condição)
{
instrução;
}
```

forma completa **if:**

```c
if (condição) 
	instrução;
else 
	instrução2;

//or 

if (condição)
{
instrução;
}else{
	instrução2;
}

//é a mesma coisa 
```

- condições têm de estar **obrigatoriamente** entre parentesis **(condição)**
- Instruções podem ser **simples** ou **compostas** se forem compostas têm de estar entre chavetas **{ }**

Swithc

# Aula 5b (Incompleto)

while 

do while

for

while - é indicado quando há uma condição que tenha-se de ser executada até esta ser falsa

do while

declarar uma variavel vai assocaiar a um determinado espaço de memoria o nome da variavel

só quando adicionamos um numero é que ele vai ter valor

as variaveis devem ter sempre um valor atribuido pelo o programador se formos usar num ciclio while

parametros → num ambito de uma função um ponto de entrada numa função de dados 

se eu tenho uma função com parametros são os indentificadores que me permite identificar um ponto de entrada

parametros por valor →

parametros por referencia →

não se pode declarar a variavel dentro do ciclo for
int i;

mas depois incializar dentro do ciclo 
i = 1;

usamos um for quando já temos um número especifico

***for*** fluxograma

for (inicializações; condição; pós-instrução){

instrução;

}

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/b1acfdc5-5c46-4e1a-be7e-a12ec3dcd922/Untitled.png)

**While**

inicializações;
while (condição) {
instrução;
pós-instrução;
}

# Aula 6 (Incompleto)

int main vai dar return boleano 1 se funcionou 0 se nao e a 

parametros são variaveis que são declaradas no formulario que permitem que entrem variaveis numa função

ao chamar a função “o main” irá fornecer 2 argumentos int n e o float y

parametos é quando defino

argumentos é quando invoco

função é sub programa e só produz um resultado r

void não retorna  (quando fazermos o c pensar que é um sub programa)

tudo o resto sim 😀

o numero de argumentos tem de concidir com o numero de parâmetros

nunca colocar um return numa função que tenha void

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/b567cdf6-0894-44df-9786-c20cb31e2728/Untitled.png)

# Aula 7 (Incompleto)

vetor indentificador com uma variavel normal 

vetores são indentificados pelo o indice 

indice é a possição relativa do vetor

**Declaração de vetores**

***data-type indentifier[num-of-elements]**;*

int meses[12]; // for  1 2 3 4 5 6 7 8 10 11 12

o num de elementos tem de ser sempre declarado 🤓

**Inicialização válidas**

int data[3] = {25, 12 , 2019}; /este vai ser mais usado para os testes 

int data[] = {25,12,2019}; /é a mesma coisa que declarar o vetor com 3 valores  / este vai ser mais usado na pratica demora menos tempo menos um caracter

char nome[256] = {’R’,’i’,’t’,’a,’\0’} // as outras 256 estão vazias mas a memoria está ocupada com 256 cracters mas estamos só a usar 5 caracters

//esta situação é mehor pq estamos só a reservar 5 estritamente
mas depois não podemos por mais caracters

char nome[] = {’R’,’i’,’t’,’a’,’\0’}

vetores → conjuntos de espaços em memoria 

o programador tem de controlar o numero de acesso de elementos a um vetor se superar o num-de-elementos indicado vai dar erro de violação de acesso 👍

disciplina de HCI → interação homem máquina → explorar em tempos livres 🧐

for i → ciclo que mostra o conteúdo de um vetor

vetores precisam de ciclos 

C não verifica o limite dos vetores.

Para vetores devemos sempre tabalhar com Constantes Simbólicas 

#define MAXAluno 150  

int notas[MAXAluno], nAlun //nAlunos guarda o no num efetivo de elemenos que estamos a usar no vetor

printf(“Quantos alunos: ”);
scanf(“%d”, &nAlun]);
if(nAlun>MAXALUN) nAlun=MAXALUN; // se for maior não pode ser pq definimos o valor simbolico como 150 então se nalunos for 160 o valor vai tomar o valor de 150 e nunca sera inserido mais valores 🤑

→ a nota de todos os alunos
int n;
for(n=0; n<nAlun; n++){
printf(“nota do %dº aluno: ”, n+1);
scanf(“%d”, &notas[n]);
}

→ Mostrar todas as notas
for(n=0; n<nAlun; n++)
printf(“nota do %dº aluno: %d\n”, n+1, notas[n]);

 **Utilização de vtores como parametros funções**

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/4a0a9a08-92c3-4fd7-9996-09d1ed199d57/Untitled.png)

---

aqui enviamos o endereço do vetor 

depois na função vai mudar 

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/b1324702-faa1-45a2-9d58-d9f568680d3b/Untitled.png)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/a67fa741-2eec-421e-b4b9-f870b0fdefd7/Untitled.png)

```c
#include <stdio.h>
#define NMaxElem 10

void lerVetor(float V[], int n){
    int i;
    for(i=0; i<=n-1; i++){
        printf("Escreva o valor do %dº elemento: ", i+1);
        scanf("%f", &V[i]);
    }
}

void Somarvetores(float A[], float B[], float S[], int n){
    int i;
    for(i=0; i<=n-1; i++) S[i]=A[i]+B[i];
}

void Mostrarvetor(float V[], int n){
    int i;
    for(i=0; i<=n-1; i++) printf("Valor do %dº elemento: %.2f\n", i+1, V[i]);
}

int Iguais(float A[], float B[], int n){
    int i=0;
    for(i=0; i<=n-1 && A[i]==B[i]; i++);
    return i==n;
}

void Copiarvetores(float A[], float B[], int n){
    int i;
    for(i=0; i<=n-1; i++) B[i]=A[i];
}

int main(){ /* bloco principal */
    float X[NMaxElem], Y[NMaxElem], Z[NMaxElem];
    int nelem; /*para facilitar admitimos que os 3 vetores
    guardam sempre o mesmo nº de elementos, caso contrário,
    precisávamos de 3 variáveis: nelem1, nelem2 e nelem3*/
    printf("Quantos elementos? "); scanf("%d", &nelem);
    if(nelem>NMaxElem) nelem=NMaxElem;

    printf("Leitura dos valores do vetor X\n");
	    lerVetor(X, nelem);

    printf("Leitura dos valores do vetor Y\n");
    lerVetor(Y, nelem);
    Somarvetores(X, Y, Z, nelem);

    printf("Os valores do vetor soma são:\n");
    Mostrarvetor(Z, nelem);

    if (Iguais(X,Y,nelem)) printf("Os vetores são iguais\n");
    else{
        Copiarvetores(X,Y,nelem);
        printf("Os vetores ficaram iguais\n");
    
    }
    printf("vetor X\n"); Mostrarvetor(X,nelem);
    printf("vetor Y\n"); Mostrarvetor(Y,nelem);
}
		
```

```c
void funcao(tipo_de_dado paramentro, tipo_de_dado parametro)

int main(){

funcao( argumento, argumento);

}
```

# Aula 8 (Incompleto)

n[m][l][c]

ao chamar a função enviamos o enderço do primeiro elemento do array

tipo identificador [Dimensão1 ][Dimensão2 ] ... [DimensãoN ];

int notas[NPROF][NTURMAS][NALUNOS];

insNotas(notas)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/2270cfe0-b0ad-4b52-96a9-7d695b585b41/Untitled.png)

# Aula 10 - Strings (Incompleto)

scanf(”%s”, str);

O gets() é usado para ler strings mas não valida o tamanho de uma string

O scanf() só conseguira ler uma palavra nao consegue ler mais como “Ana Maria” 
só vai ler “Ana” por causa do espaço “ “ 

char str[9] = “Ana Maria” //é realmente “Ana Maria\0”

o \0 indica que é uma string
scanf(”%s”, str); \\nao pomos o endereço pq é um vetor de caracters (string)

gets(str);

quando fomos a iterar é giro pq vai ser o tamanho mas i<9 (neste caso)

vai ser tipo assim a imprimir cada um

A 0
n 1

a 2

   3

M 4

a 5

r 6

i 7 

a 8

nao overthink

temos 9 posicoes/elementos na string 8 caracters uteis

strlen(str) = 9 //diz o tamanho da string

str1[]=”Bia Maria”
str2[]=”Ana Maria”

strcpy(str1,str2) //copia a string s2 para s1 //nao muda o tamanho da str 1

puts(str1);

Ouput:

Ana Maria

str1[]=”Bia Maria”
str2[]=”Ana Maria”

stcat(str1,str2) //concatena (adiciona à direita da str1) concatena a str2 aseguir ao final da str1 //esta funçao em específico vai mudar o tamanho da str1 para que consiga cocatenar a str2 na 1  :D

o ouput vai ser:

Bia MariaAna Maria

strcmp(s1,s2) //se as strings forem iguais dá o valor booleano 1 de return

strchr(s1,ch) // devolve o endereço de memória da primeira occorencia do caracter ch na string s1 //vai tipo iterar a ter encontrar o caracacter

strstr(str1,str2) //  Devolve o endereço de memória da primeira
ocorrência da string str2 na str1.

## EM STRINGS NUNCA SE USA O MESMO Q OS VETORES UTILIZAMOS POINTERS *str  NÃO ~~str[]~~

# Aula 8b PI - Ficha 7 LP
Programas Uni-Modulares e Multi-Modulares (OK)

Diretivas

- Include headers
- Declares

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/657f6171-34a6-4d8e-b5f9-3855791a54de/Untitled.png)

Os ficheiros incluidos pela diretiva **#include** são denominados como 

***header files*** os nomes destes terminam com a extensão ***.h***

Exemplo:

```c
#include <stdio.h> //standard input output .h(header file)
#include <math.h> 
#include <stdlib.h>
```

Existe 2ªs formas de organizar um programa em c 

- Forma Uni-modular
    - Um modulo está tudo no ficheiro .c
- Forma Multimodelar
    - Temos de fazer um programa da forma que é requesitado pelo o problema
    - As Funções param de estar no programa principal mas sim em ficheiros .h
    - O programa principal é em .c (o unico ficheiro) que tem o main
    - Os restantes programas tem .h
    - tem os pontos .h e um ponto .c
    - ficheiros de cabeçalho - deve-se de meter numa pasta
    - temos de ter um ficheiro .h e um ficheiro .c
    - 
    

```cpp
#include <ficheiro_a_incluir> 

- o de cima é de diretórios standard

#include “Ficherio_a_incluir”

- diretório criado por nós
```

Para cada ficheiro .h vai ter de haver um ficherio .c com o mesmo nome.

o ficheiro.h 

vair ter o prototipo das funcoes

exemplo:

```c
int isnull(char *str);
int strlen(char *str);
char *strlwr(char *str);
char *strupr(char *str);
int strcountc(char *str, char ch);
int indchr(char *str, char ch);
int evazio(char c);
char *trimright(char *str);
```

o ficheiro.c vai ter as funcoes em completo

exemplo:

```c
#include <stdio.h>
#define MAXNUM 300

// a)
int isnull(char *str) {
    return (str[0] == '\0') ? 1 : 0;
}

// b)
int strlen(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

// c)
char *strlwr(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}

// d)
char *strupr(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

// e)
int strcountc(char* str, char ch) {
    int i, contador = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            contador++;
    }

}

// f)
int indchr(char* str, char ch) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            return i;
    }
    return -1;
}

// g)
int evazio(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

char* trimright(char* str) {
    int i;
    for (i = strlen(str) - 1; i >= 0; i--) {
        if (!evazio(str[i])) {
            str[i + 1] = '\0';
        }
    }
}
```

 

Como o ficheiro header que acabamos de criar não é uma standard library do C nos implemetamo-lo da maneira seguinte:

```c
#include "ficheiros.h"

num standard é tipo
#include <stdio.h>
```

para header files temos que dar o endereço/caminho do ficheiro por completo se não tiver na mesma pasta 

se tiver na mesma pasta que o main so pomos o nome do .h file e já funciona

# Aula 11 - Apontadores (15/11/2023)

### **Resumo prévio de variáveis: (Importante)**

Quando declaramos uma variável, o computador reserva um espaço na memória para armazenar o seu valor → a este espaço chamamos de endereço de memória os endereços são valores hexadecimais, diferente tipos de dados utilizam diferentes quantidades de espaço na memória, 1 byte é equivalente a 1 endereço de memória/espaço na memória.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/aabe2735-c5ea-4b30-b071-d1df2d33390b/Untitled.png)

Neste caso a variável **media** que o tipo de dados é **`float`** *(float’s ocupam 4 bytes de memoria)* vai ser armazenada em 4 endereços começando no F5FC (endereço principal) até ao F5FF.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/88ddaee6-4834-4677-b39f-1f31dee0ad34/Untitled.png)

Para saber a quantidade de bytes que um `data_Type` ocupa faz `sizeof(int/float/double/…)`

---

## Conceito de um Apontador V

**Apontadores são Variáveis** que armazenam endereços de memória. Eles são usados para manipular/referenciar diretamente estes endereços de memória onde os valores presentes nas variáveis estão alojados.

- Apontadores são identificadores/variáveis que armazenam **`*estritamente*`** endereços de memória.
- O **valor** de um apontador **é o endereço de memória** onde uma variável está armazenada.
- O tipo de um apontador deve corresponder ao tipo da variável que ele aponta. Por exemplo, um apontador para uma variável `char` deve ser do tipo `char *`, e um apontador para uma variável `float` deve ser do tipo `float *`. *(Se lermos em português corrente neste caso seria `Apontador para Variável float`!)*
- O valor de um apontador é sempre um endereço de memória, que é um valor hexadecimal  *(`F5F9` para a imagem seguinte)*.
- Quando declaramos uma variável, o computador reserva espaço na memória para essa variável. O apontador para essa variável armazena o endereço desse espaço na memória.

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/ec243af7-70c1-4eed-bbf8-371a543229c4/Untitled.png)

```c
char ch = 'a'; //O tipo é char; o valor é 'a'; o endereço que o computador deu é **F5F9**
char *pch = &ch; //apontador para endereço de ch F5F9

//este exemplo mostra como declarar e inicializar ao mesmo tempo
//à frente tem mais informações como incializar só e outras coisas ***🤧***
```

^^ Neste snippet de código anterior o `&ch` vai ser o `endereço *(hexadecimal)*` onde a variável `ch` está localizada na memória.

**Extra:** 

- (Questão de sintaxe e como é sugerido ser escrito pela a indústria/(outros programadores):
    - `char *pch;` (adicionamos o `p` só para indicar que é um pointer, é só sugerido mas vale a pena e mais facilmente percebe-se que define pch como um apontador par um valor tipo char neste caso a variável ch).

**Declarar; Inicializar e Atribuir (a) uma variável:**

```c
char ch='a'; //<- Isto é declarar e incializar tudo numa só linha
						// mas é meio diferente para apontadores

char *pch; //<- Isto é declarar, só na declaração é que se utiliza o *****
pch = &ch; //<- Isto é atribuição um apontador 🫡 *e atribuição de valor*

//a maneira de inicializar vai mudar quando utilizarmos vetores
```

Se eu quisermos inicializar um apontador para *nada* atribuímos o valor **`NULL`** 

- Exemplo: **`pch = NULL;` →** Atribuição
    - Na prática o `NULL` não é um endereço nem é um valor vazio como quando nós declaramos variáveis.
    - O **`NULL`** é uma constante simbólica definida em `<stdio.h>` com valor 0

---

## Operadores importantes para Apontadores V

Existem dois operadores (unários), que são elementares para a utilização de Apontadores: 

- **Operador de Endereço `&`** **→** Traduz literalmente para **`endereço de`**
    
    ![O **`&`** permite obter o endereço de x variável no meio do código:
    • Neste exemplo o `pch` vai tomar o valor de `F5F9`.
    `char ch = 'a';`
    `char *pch = &ch;`](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/7fbaae0b-5dda-4e97-8fe4-8b22442216d5/Untitled.png)
    
    O **`&`** permite obter o endereço de x variável no meio do código:
    • Neste exemplo o `pch` vai tomar o valor de `F5F9`.
    `char ch = 'a';`
    `char *pch = &ch;`
    
- **Operador de Desreferenciação `*`** → Traduz literalmente para **`valor apontado por`**
    
    ![o **`*`** permite obter o valor da variável localizada *(/guardado) no endereço que se lhe segue como operando.*
    `char *pch = &ch;` → Depois o printf de `*pch` vai dar o valor guardado na variável `ch` o printf de `pch` vai dar o endereço da variável `ch`.
    
    Ao contrário da inicialização. `*` atras do apontador (só no meio do código) vai representar o valor referenciado apontado pelo apontador 👍](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/17ec7107-4e15-4888-8561-6a3dce0838a1/Untitled.png)
    
    o **`*`** permite obter o valor da variável localizada *(/guardado) no endereço que se lhe segue como operando.*
    `char *pch = &ch;` → Depois o printf de `*pch` vai dar o valor guardado na variável `ch` o printf de `pch` vai dar o endereço da variável `ch`.
    
    Ao contrário da inicialização. `*` atras do apontador (só no meio do código) vai representar o valor referenciado apontado pelo apontador 👍
    

- **Valores dados se forem imprimidos**

![Ao imprimir um **apontador** ou um **endereço** estes vão ter o seu próprio especificador de formato neste caso `%p`, um `int` normal tem `%d`, um char tem `%c`.](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/9936aa96-6a73-4d85-b36c-856df78044c3/Untitled.png)

Ao imprimir um **apontador** ou um **endereço** estes vão ter o seu próprio especificador de formato neste caso `%p`, um `int` normal tem `%d`, um char tem `%c`.

`ch`

- B

`&ch`

- F5F9 /* endereço de ch */

`pch`

- F5F9 /* o valor de pch que é o valor do endereço de pch */

`*pch`

- B  /* O valor do endereço a ser referenciado por pch */

`&pch`

- F601 /* endereço de pch*/

### **Exercícios:**

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/937935e3-95a4-4c0a-a78e-4ba1d4ca06f7/Untitled.png)

- `ch`
    - b
- `&ch`
    - F5F9
- `pch`
    - F5F9

- `*pch`
    - B
- `&pch`
    - F601
    

- `&media`
    - F5FC
- `*(&num)`
    - 12
    

---

**Exercício →**  Instrução Equivalente:

```c
int x=1, y, *px, *py;
px = &x; 
py = &y;
```

- `*py = x;`
    - y = 1;
- `*px = 20;`
    - x = 20;
- `*py = *px;`
    - y = 20;

- `px = py;`
    - px = &y;
- `*px = 5;`
    - x = 5;
    

- `(*py)++;`
    - y++;
- `(*px)++;`
    - x++;
    

---

## Aritmética de apontadores X (Percebo +-)

Aritmética de apontadores é muito parecida com a normal, existem apenas duas operações aritméticas que podem ser utilizadas com apontadores: **adição** e **subtração**! *(Termos também em conta que as variáveis ocupam posições consecutivas, oque não aconteceria na prática a não ser se fosse um vetor)*

### Incrementação de Apontadores

*(só faz sentido oq escrevi se isto for vetores, só pode ser vetores 🤨🤨🤨)*

A maneira mais fácil de compreender esta parte da matéria vai ser com o seguinte exemplo:

- Consideremos que **p** *(pointer)* aponta para um `short int` *(2 bytes) cujo o endereço será 2000 (**F5F0** tenta usar este como exemplo, mas mentalmente 🤓)*
    - Em código:
        
        ```c
        int main(){
        	short /*int*/ num = 3;
        				/* ↑ ***→ não é necessário ter o int****/
        	short *pNum;
        	pNum
        	short *pNum = &num; /* ***→ isto é uma inicialização****/
        }
        ```
        
- Se adicionarmos a expressão **`p++`** o apontador `p` incrementará não para 2001 mas para 2002 *(a posição do próximo `short int`~~?~~) → (está tecnicamente num vetor)*
- Semelhantemente a expressão **`p--`** decrementará o apontador `p` 2 bytes para `1998`

ps.: números hexadecimais são de **base 16** não **10** então tecnicamente `2000-1` `*(-2 bytes)*` seria tipo **`1FFE`** invés de `~~1998~~`

Em suma, as operações aritméticas de um **pointer** avançam/recuam o `sizeof(**pointer**)` respetivamente por cada unidade de incremento/decremento

### Adição e Subtração a Apontadores e com Apontadores

Quando adicionamos ou retiramos uma unidade a um apontador (`p=p+1`, `p=p-1`), é incrementado ou decrementado pelo o **`sizeof(**tipo_de_dados**)**`. *(tamanho do `tipo_de_dados` apontado)*

Isto **não só se aplica** a uma única unidade podemos ***adicionar*** ou ***subtrair*** **outros valores inteiros** aos apontadores:

*Para efeito o apontador vai ser  `short *p`;*

- `p = p+10` passa a apontar para o 10º elemento a contar do elemento inicialmente apontado *(acho que isto é vetores)*
- `p = p-5` passa a apontar para o 5º elemento anterior ao elemento incialmente apontado

**(era fixe ter aqui uma imagem)** 😕

É possível também subtrair apontadores

- a diferença entre dois apontadores `p1-p2`, vai dar o **número de elementos** *(do `data_type` apontado)* **entre estes dois endereços**. 

*100% de certeza que isto é para vetores não faz sentido se não for → secalhar só se este fosse dar o num hexadecimal de diferença de endereços mas não dá então* 🤷

// random nao tem a ver estudar portugues 😭 simbiotica semantica

só podemos somar ou subtrair apontadores do mesmo tipo

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/b60a0061-9272-4936-9f26-a8a60edd2051/Untitled.png)

^^^^^ nota trata a denominação elemento como o tamanho do data type

se p for float salta 4 bytes * 10 para a frente  salta o tamanho do data type
se p for char salta 10 bytes para a frente
se p for int salta 2 * 10 bytes para a frente

---

**→** **Existem apenas duas operações aritméticas que podem ser usadas com apontadores: a adição e a subtração**

- Consideremos que **p** aponta para um inteiro de 2 Bytes (**short int**) cujo endereço é 2000
- a expressão p++ incrementa o apontador p, não para 2001, mas para 2002 que é a posição do próximo inteiro
- analogamente, a expressão p-- decrementa o apontador p para 1998

→ Quando um apontador é incrementado ele passa a apontar para o próximo elemento do seu tipo base

→ Quando um apontador é decrementado ele passa a apontar para o elemento anterior

Um apontador para um tipo xpto avança (recua) sempre sizeof(xpto) Bytes por cada unidade de incremento (decremento)

Vimos já que quando se adiciona ou retira uma unidade a um apontador (p=p+1, p=p-1),

- ele é incrementado ou decrementado pelo tamanho do tipo de dado apontado

→ Podemos também adicionar ou subtrair outros valores inteiros aos
apontadores

- a expressão **p=p+10** faz com que p passe a apontar para o décimo elemento a contar do elemento inicialmente apontado
- a expressão **p=p-3** faz com que p passe a apontar para o terceiro elemento anterior ao elemento inicialmente apontado

→ Ou, até mesmo subtrair apontadores

- a diferença de dois apontadores, **p1-p2**, dá o **número** de elementos do tipo apontado que se situam entre esses dois endereços

---

## Apontadores e Vetores (Falta tudo)

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/6683e173-5698-4946-a421-34c559a93342/Untitled.png)

não falei de apontadores e vetores fazer em casa

---

## Apontadores para Apontadores X (percebo +-)

extra: !importante

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/1fc123c6-20d8-4520-83fb-a3a58a8966fb/Untitled.png)

```c
char ch;
char *pch = &ch; //*pch = 'F';
char **ppch = &pch;

*pch = 'F'; //se incializarmos sem o data type estamos 

```

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/b15f6a65-03bd-45f3-ae2d-bc87d170a728/Untitled.png)

a

---

## Apontadores para Funções (Falta mas não sai)

funções não são variáveis mas como as variáveis possuem um endereço que as identifica

nao sai 😀🍾

```c
tipo_de_retorno(*ptr)(); //sintaxe
^ data_type nao tem nome de funçãp

double (*ptr)();
ptr=sqrt;
(*ptr)
```

^^^^

estudar este 

se estivermos a trabalhar com apontadores em estruturas utilizamos `->` invés de `.` !

# Aula 13 - Ficheiros (27/11/2023)

## Extra:

**Ficheiros** → guarda no disco o resultado de processamento e a entrada de dados;

Exitem 2 itpos de ficherios:

binário → cujo o conteúdo não é legível por nós

texto → somente texto código ascii .txt

output via ficheiro

FILE *fp

apontador para uma variável do tipo FILE

```c
main(int argc; char* argv[]){ //

}
```

argumentos da linha de comandos
estes arugementos entram pela linha de comando

são sempre apenas dois arguemtnos:

O numero de argumentos

e um apontador para o coentuedo de arugentos

argc (argument counter) → quantos sao

argv (argument value) → apontador par ao conteudo dos argumentos 

Existem dois tipos de ficherios binários e 

o fgets confirma o tamnho da string 

oq o fgets não parametro para confirmar 👍

# Parametros

int main(int argc , char *argv[]){}

só existe 2 argumentos

argc → argument count → quantos argumentos é que sao / numero de argumentos na linha de comandos

```c
c:\IPB_SRC\2324\lp> f9e5 f9e5.c f9e5.exe
```

argb → argument value → quais argumentos sao

# Aula 14 - Debugging (05/11/2023)

Debugging é um processo que serve para isolar e corrigir erros lógicos de maneira mais fácil e eficaz.

## Breakpoint → Ponto de Interrupção

Interrompe a execução de código até onde o breakpoint está. Pode ser feito através da tecla F9

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/1e2bcdb5-4499-4d51-b93d-fe756afa6984/Untitled.png)

Executa-se da mesma maneira que o código normal pq tudo passa pelo windows local debugger no vs 2022 

![Untitled](https://prod-files-secure.s3.us-west-2.amazonaws.com/d2fcb3a8-4d16-4b61-8fa6-77435bf5e87a/4f9fab08-c9c9-4c00-84ca-7db12801b603/Untitled.png)

O botão step into ou a tecla f11 vai deixar-nos entrar dentro da função

o step over  para executar ca da instrução da função 

isto só funciona se executarem o código no modo debug primeiro 

## Step into

entra na função

## Step out

Salta a próxima linha

# Aula 15a - Estruturas (11/12/2023)

oque acontecer quando precisamos de armezenar muita informação 

quando temos a necessidade de agrupar informações de tipos diferentes e

permitem associar a unico identificador 

associar a um indentificador tipos de valores diferentes 

se quisesomos armezenar strings nao conseguiamos armezenar um valor do tipo inteiro

para declararmos estruturas precisamos de utilizar a palavra **struct** 

```c
struct indentificador{
	definição dos campos;
}

struct Data{
	 int dia, ano;
	 char mes[10];
}
```

associamos 3 variaveis duas do tipo int uma do tipo string

uma estrutura nao é nada mais nada menos que uma estrutura do tipo de variaveis 

quero que aqueles dois indentificadores serem to tipo data 

declaração de variaveis struct que utilizam a mesma estrutura

```c
struct Data casamento, nascimento;

struct Data{
int dia, ano;
char mes[10];
} casamento, nascimento; 
```

tenho duas variaveis que estao indexadas aquela estrutura ^^^^

para ter acesso direto a cada membro individual de uma estrutura precimsamos de utilizar o operador ponto ( . )

```c
struct Data{
	 int dia, ano;
	 char mes[10];
}

int main(){
	struct Data hoje;
	hoje.dia=14;
	hoje.ano=2022;
	strcpy(hoje.mes, “dezembro”);
	printf(“Bragança, %d de %s de %d.\n”, 
										hoje.dia, hoje.mes, hoje.ano);
}
```

uma estrutura é uma associação de multiplas variáveis num só valor

numa só coisa por milhares de indentificadores

constantes imbolicas minusculas

declaramos estruturas com iniciais maisculas pq é igual às classes em Programação Orientada a Objetos

variaveis minusculas

nos nao vamos trabalhar com a estrutura vamos trabalhar com a variavel associada a estrutura

```c
/*
nos nao vamos trabalhar com a estrutura Aluno vamos 
trabalhar com a variavel associada a estrutura neste
caso alunos
*/

struct Data{
	 int dia, ano;
	 char mes[10];
}

struct Aluno{
	char nome[50];
	char curso[30];
	int idade;
	struct Data nasc, inscric;
}aluno; // Atenção que Aluno é o nome da estrutura
				// e aluno o nome da variável

/*
se pretendemos, por exemplo, mostrar o ano de 
inscrição do aluno representado na variável, 
fazemos
*/

printf("%d\n”, aluno.inscric.ano);
```

## Estrutura e Funções

## Estruturas e Apontadores

### Apontador par a uma estrutura

Quando 

(*pdata) para saber que referencia há variavel data

quando declaramos uma estrutura reserva espaços de forma continua

# Aula 15b - Enumerações (11/12/2023)

# Aula 15c - typedef (11/12/2023)

dá oara fazer “novos” tipos de data só da de renome

apenas permite atribuir nomes mais descritivos aos tipos de dados

ao utiliarmos typedef pomos um T atrás 

TAluno TData

:P
