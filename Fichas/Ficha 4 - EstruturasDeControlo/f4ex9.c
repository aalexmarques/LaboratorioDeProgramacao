#include <stdio.h>
int main(){
    char c;
    int total, letras, vogais, consoantes;
    total = letras = vogais = consoantes = 0;
    do{        
        printf("caractere: ");
        scanf(" %c",&c);
        printf("\n");
        total++;

        if(('a' <= c && c <= 'z') || ('A' <= c && c <='Z')){
            letras++;
            if((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') || 
            (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U')){
                vogais++;
            }else{
                consoantes++;
            }
        }
    }while(c != '.');
    
    float perc;

    printf("\n- Total: %d\n",total);
    printf("- Letras: %d (%.2f%%)\n",letras, letras * 100.0 / total);
    printf("- Vogais: %d (%.2f%%)\n",vogais, vogais * 100.0 / total);
    printf("- Consoantes: %d (%.2f%%)\n",consoantes, consoantes * 100.0 / total);
    return 0;
}