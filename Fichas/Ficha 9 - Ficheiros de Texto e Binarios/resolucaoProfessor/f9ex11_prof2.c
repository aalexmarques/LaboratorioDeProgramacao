#include <stdio.h>
#define TAMSTR 100
#define PATH "c:\\Temp\\string.int"

int menu() {
	int opcao;
	printf("0) Sair\n");
	printf("1) Inserir uma string\n");
	printf("2) Mostrar a string\n");
	printf("3) Guardar a string no ficheiro\n");
	printf("4) Ler a string a partir do ficheiro\n");
	printf("Qual a sua opcao? ");
	scanf("%d", &opcao);
	return opcao;
}

void inserirString(char str[]) {
	fseek(stdin, 0, SEEK_END);
	printf("Insira uma string: ");
	fgets(str, TAMSTR + 1, stdin);
}

void mostrarString(char str[]) {
	printf("A string inserida foi: \n %s\n", str);
}

void guardarString(char str[]) {
	FILE* fp;
	if ((fp = fopen(PATH, "wb")) == NULL)
		printf("Erro ao abrir o ficheiro %s\n", PATH);
	else {
		fwrite(str, sizeof(int), TAMSTR + 1, fp);
		fclose(fp);
	}
}

void lerString(char str[]) {
	FILE* fp;
	if ((fp = fopen(PATH, "rb")) == NULL)
		printf("Erro ao abrir o ficheiro %s\n", PATH);
	else {
		fread(str, sizeof(char), TAMSTR + 1, fp);
		fclose(fp);
	}
}

main() {
	int opcao;
	char frase[TAMSTR + 1];
	while (1) {
		opcao = menu();
		switch (opcao) {
		case 0: exit(1);
		case 1:
			inserirString(frase); break;
		case 2:
			mostrarString(frase); break;
		case 3:
			guardarString(frase); break;
		case 4:
			lerString(frase); mostrarString(frase); break;
		}
	}
}