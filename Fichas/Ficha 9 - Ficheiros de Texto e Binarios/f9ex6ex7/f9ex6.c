#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 5
#define STAR_COUNT 2
#define MAX_NUM 50
#define MAX_STAR 12

int validarChaves(int numeros[], int estrelas[]){
    for(int i = 0; i < NUM_COUNT; i++){
        if(numeros[i] < 1 || numeros[i] > MAX_NUM){
            return 0; //Um dos números é inválido
        }
        for(int j = i+1; j< NUM_COUNT; j++){
            if(numeros[j] == numeros[i])
                return 0; //Um dos números repete-se 
        }
    }
    for(int i = 0; i < STAR_COUNT; i++){
        if(estrelas[i] < 1 || estrelas[i] > MAX_STAR){
            return 0; //Umas das estrelas é inválida
        }
        for(int j = i+1; j < STAR_COUNT; j++){
            if(numeros[j] == numeros[i])
                return 0; //Uma das estrelas repete-se 
        }
    }
    return 1; //a chave é válida
}

int main(){
    FILE *fp;
    int qtdChaves, chavesValidas = 0;
    int chave[NUM_COUNT+STAR_COUNT];


    printf("Quantas chaves quer inserir: "); scanf("%d", &qtdChaves);

    if ((fp = fopen("euromilhoes.bin","wb")) == NULL){
        printf("Erro ao abrir o ficheiro");
        return 1;
    }else{    
        fwrite(&chavesValidas,sizeof(int),1,fp);
        for(int i = 0; i < qtdChaves; i++){
            printf("Insira a chave no %d (5 nums e 2 estrelas): \n" , i+1);
            for(int j = 0; j < NUM_COUNT; j++){
                printf("Numero %d: ",j+1);
                scanf("%d",&chave[j]);
            }
            for(int j = 0; j < STAR_COUNT; j++){
                printf("Estrela %d: ",j+1);
                scanf("%d",&chave[NUM_COUNT+j]);  
            }
            if(validarChaves(chave,&chave[i])){
                chavesValidas++;
                fwrite(chave,sizeof(int),NUM_COUNT+STAR_COUNT,fp);
            }else
                printf("Chave invalida. Ignorada.\n");
        }
        rewind(fp);
        fwrite(&chavesValidas,sizeof(int),1,fp);
        
        fclose(fp);
        if(chavesValidas == 1)
            printf("%d chave valida foi guardada no ficheiro \"euromilhoes.bin\"",chavesValidas);
        else
            printf("%d chaves validas foram guardadas no ficheiro \"euromilhoes.bin\"",chavesValidas);
        return 0;
    }
}