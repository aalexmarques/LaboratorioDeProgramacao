#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define TAMNOME 50 // Define o tamanho máximo do nome
#define MAXDADOS 100 // Define o número máximo de aniversariantes
#define PATH "C:\\temp\\aniversarios.bin" // Define o caminho do arquivo binário

// Estrutura para armazenar a data de nascimento
typedef struct {
    int dia, mes, ano;
} TDATA;

// Estrutura para armazenar os dados de um aniversariante
typedef struct {
    char nome[TAMNOME];
    TDATA data_nascimento;
} TAniversario;

// Função para ler os dados de um aniversariante
TAniversario lerAniversariante() {
    TAniversario aniv;
    fseek(stdin, 0, SEEK_END); // Limpa o buffer de entrada
    printf("Nome do Aniversariante: ");
    gets(aniv.nome); // Lê o nome do aniversariante
    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &aniv.data_nascimento.dia, &aniv.data_nascimento.mes, &aniv.data_nascimento.ano); // Lê a data de nascimento
    return aniv;
}

// Função para mostrar os dados de um aniversariante
void mostrarAniversariante(TAniversario aniv) {
    printf("%s nasceu no dia %02d/%02d/%04d (%d anos)\n", aniv.nome,
        aniv.data_nascimento.dia, aniv.data_nascimento.mes, aniv.data_nascimento.ano, calcularIdade(aniv.data_nascimento));
}

// Função para pesquisar um aniversariante pelo nome
void pesquisarAniversariante(TAniversario* aniversarios, TAniversario* ultimo) {
    char nomep[TAMNOME];
    TAniversario* cur;
    fseek(stdin, 0, SEEK_END); // Limpa o buffer de entrada
    printf("Qual o nome a pesquisar: ");
    gets(nomep); // Lê o nome a ser pesquisado
    for (cur = aniversarios; cur < ultimo; cur++) { // Itera sobre os aniversariantes
        if (strstr(cur->nome, nomep) != NULL) // Verifica se o nome pesquisado está contido no nome do aniversariante
            mostrarAniversariante(*cur); // Mostra os dados do aniversariante encontrado
    }
}

// Função para exibir o menu e obter a opção do usuário
int menu() {
    int opcao;
    printf("0) Sair\n");
    printf("1) Adicionar - adicionar um aniversariante\n");
    printf("2) Pesquisar - pesquisar aniversariante por nome\n");
    printf("3) Listar - listar todos os aniversariantes\n");
    printf("Qual a sua opcao? ");
    fseek(stdin, 0, SEEK_END); // Limpa o buffer de entrada
    scanf("%d", &opcao); // Lê a opção do usuário
    return opcao;
}

// Função para guardar os aniversariantes em um arquivo binário
void guardarAniversarios(TAniversario* aniversarios, int nintens) {
    FILE* fp;
    if ((fp = fopen(PATH, "wb")) == NULL) // Abre o arquivo para escrita binária
        printf("Erro ao abrir o ficheiro %s\n", PATH);
    else {
        fwrite(aniversarios, sizeof(TAniversario), nintens, fp); // Escreve os dados no arquivo
        fclose(fp); // Fecha o arquivo
    }
}

// Função para ler os aniversariantes de um arquivo binário
TAniversario* lerAniversarios(TAniversario *aniversarios) {
    FILE *fp;
    TAniversario *ptr;
    if ((fp = fopen(PATH, "rb")) == NULL) { // Abre o arquivo para leitura binária
        printf("Erro ao abrir o ficheiro %s\n", PATH);
        return aniversarios;
    } else {
        ptr = aniversarios; // Inicializa o ponteiro para o início do array
        while (fread(ptr, sizeof(TAniversario), 1, fp) == 1) // Lê os dados do arquivo
            ptr++;
        fclose(fp); // Fecha o arquivo
        return ptr;
    }
}

int calcularIdade(TDATA data_aniversario){
	int idade;
	/*
	https://www.tutorialspoint.com/c_standard_library/c_function_localtime.htm
	
	Para ovter a adata atual temos que invocar uma conjuncao
	das 2 funcoes time localtime da seguinte forma.
	*/
	time_t raw_time;
	time(&raw_time); //cria uma esturtura do tipo time_t
	struct tm* data_atual = localtime(&raw_time); // tm -> estrutura com a data atual

	int ano_atual = data_atual->tm_year + 1900; //os anos são guardados com 3 digitos e faz uma contagem a partir de 1900
	int mes_atual = data_atual->tm_mon + 1; // os meses são guardados de 0 a 11
	int dia_atual = data_atual->tm_mday; 

	int ano_nascimento = data_aniversario.ano;
	int mes_nascimento = data_aniversario.mes;
	int dia_nascimento = data_aniversario.dia;
	idade = ano_atual - ano_nascimento;
	if(mes_nascimento > mes_atual || (mes_nascimento == mes_atual && dia_nascimento > dia_atual)){
		idade -= 1;
	return idade;
	}

}

int main() {
    TAniversario aniversarios[MAXDADOS]; // Array para armazenar os aniversariantes
    TAniversario* atual = aniversarios; // Ponteiro para o próximo aniversariante a ser adicionado
    TAniversario* cur; // Ponteiro para iterar sobre os aniversariantes
    int opcao;
	atual = lerAniversarios(aniversarios);

    while (1) {
        // Lê do ficheiro todos os aniversariantes

        opcao = menu(); // Exibe o menu e obtém a opção do usuário
        switch (opcao) {
        case 0: 
            guardarAniversarios(aniversarios, atual - aniversarios); // Guarda os aniversariantes no arquivo
            exit(1); // Sai do programa
        case 1:
            *atual = lerAniversariante(); // Lê um novo aniversariante
            atual++; // Incrementa o ponteiro para o próximo aniversariante
            break;
        case 2:
            pesquisarAniversariante(aniversarios, atual); // Pesquisa um aniversariante pelo nome
            break;
        case 3:
            for (cur = aniversarios; cur < atual; cur++) // Itera sobre todos os aniversariantes
                mostrarAniversariante(*cur); // Mostra os dados de cada aniversariante
            break;
        }
    }
}