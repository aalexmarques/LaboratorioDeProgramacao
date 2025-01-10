#include <stdio.h>
#include <stdlib.h>

#define NUM_COUNT 5
#define STAR_COUNT 2
#define MAX_NUM 50
#define MAX_STAR 12

int main(){
    FILE *fp;
    int qtdChaves, chavesValidas = 0;
    int chave[NUM_COUNT+STAR_COUNT];

    if ((fp = fopen("euromilhoes.bin","rb")) == NULL){
        printf("Erro ao abrir o ficheiro");
        return 1;
    }else{    
        fread(&qtdChaves, sizeof(int),1,fp);
        printf("# o ficheiro contem %d validas",qtdChaves); 
        
        
        return 0;
    }
}