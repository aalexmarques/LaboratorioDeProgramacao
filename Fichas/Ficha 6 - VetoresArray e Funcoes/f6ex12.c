#include <stdio.h>
#define MaxDisciplinas 15
#define MaxAlunos 300

int lerValores(int matriz[][MaxAlunos]){
    int i, j, nD, nA;
    printf("Quantas disciplinas tem o curso?: ");
    scanf("%d",&nD);
    printf("Quantos alunos tem o curos?: "); 
    scanf("%d",&nA);

    for(i=0;i<nD;i++){
        printf("# --Discplina No%d-- \n",i+1);
        for(j=0;i<nA;j++){
            printf("# Nota do Aluno No%d: ",j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }

}

int main(){
    int matrizAlunosDiscp[MaxDisciplinas][MaxAlunos], toggle; //Descplina i Aluno j
    char c;
    printf(" --- Menu --- \n a) Preencher pauta\n b) Mostrar taxa de aprovacao e reprovacao a uma determinada disciplina\n c) Mostrar qual a disciplina onde se verifica uma maior taxa de reprovações\n d) Qual a me'dia de um determinado aluno\n e) Qual o aluno melhor média\n #) Escolha uma opcao: ");
    fseek(stdin, 0, SEEK_END); //"limpa o scanf" //so utilizado na insercao de caracters 
    scanf(" %c", &c);
    do{
        switch(c){
        case 'a':
        case 'A':
            break;
        case 'b':
        case 'B':
            break;
        case 'c':
        case 'C':
            break;
        case 'd':
        case 'D':
            break;
        case 'e':
        case 'E':
            break;
        case 'f':
        case 'F':
            break;
        default:
            printf("Essa nao e' uma opcao, insere novamente: \n");
        }
    }while(c != 'f' || c != 'F');
}