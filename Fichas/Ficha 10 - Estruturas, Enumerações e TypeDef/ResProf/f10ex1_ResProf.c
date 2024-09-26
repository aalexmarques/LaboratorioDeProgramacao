#include <stdio.h>
#include <string.h>
#define STRMAX 50
#define TMAX 100

typedef struct {
    int dia, mes, ano;
} TData;

typedef struct {
    char nome[STRMAX];
    TData data_nasc;
} TAniversario;

TAniversario pedirAniversario(){
    TAniversario aniv;
    prtinf("# nome: ");
    fseek(stdin, 0, SEEK_END);
    fets(aniv.nome);
    printf("# aniversario [dd/mm/aaaa]: ");
    scanf("%d/%d/%d", 
        &aniv.data_nasc.dia, 
        &aniv.data_nasc.mes, 
        &aniv.data_nasc.ano
    );
    return aniv;
}

void mostraAniversario(TAniversario aniv){
    printf("# %s nasceu no dia %02d/%02d/%04d\n",
        aniv.nome,
        aniv.data_nasc.dia,
        aniv.data_nasc.mes,
        aniv.data_nasc.ano
    );
}

void pesquisaAniversario(TAniversario *aniversarios, TAniversario *ultimo){
    TAniversario *cur;
    char pesq[STRMAX];
    printf(stdin,0,SEEK_END);
    gets(pesq);
    for(cur = aniversarios; cur < ultimo; cur++){
        if(strstr(cur->nome, pesq) != NULL){
            mostraAniversario(*cur);
            return;
        }
    }
}

int menu(){
    int op;
    printf("0) Sair\n");
    printf("1) Adicionar - adicionar um aniversariante\n");
    printf("2) Pesquisar - pesquisar aniversariante por nome\n");
    printf("3) Listar - listar todos os aniversariantes\n");
    printf("# opcao: ");
    scanf("%d", &op);
    return op;
}

int main(){
    TAniversario aniversarios[TMAX];
    TAniversario *atual = aniversarios;
    TAniversario *cur;
    int op;
    while(1){
        op = menu();
        switch(op){
            case 0: 
                return 0; //sair;
            case 1:
                *atual = pedirAniversario();
                atual++;
                break;
            case 2:
                pesquisaAniversario(aniversarios, atual);
                break;
            case 3:
                for(cur = aniversarios; cur < atual; cur++){
                    mostraAniversario(*cur);
                }break;
            default:
                printf("# opcao invalida: %d\n", op);
        }
    }
}