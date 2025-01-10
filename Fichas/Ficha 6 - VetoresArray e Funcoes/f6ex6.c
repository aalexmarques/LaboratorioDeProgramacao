#include <stdio.h>
#define MAX 20

int introNums(int s[]){
    int i = 0;
    while(i < MAX){
        printf("%d: ",i+1);
        scanf("%f",&s[i]);
        if(s[i]==0){
            break;
        }
        i++;
    }
    return i;
}

int ordemCrescente(int s[], int num){
    for(int i = 0; i < num - 1; i++){
        if (s[i] >= s[i+1])
            return 0;
    }
    return 1;
}

int seqAlternada(int s[], int num){
    for(int i = 0; i < num-1; i++){
        if((s[i] > 0 && s[i + 1] > 0) || (s[i] < 0 && s[i + 1] < 0))
        return 0;
    }
    return 1;
}

int semRepticoes(int s[], int num){
    for(int i = 0; i < num-1; i++){
        for(int j = i + 1; j < num; j++){
            if(s[i]==s[j])
                return 0;
        }
    }
    return 1;
}

int main(){
    int s[MAX];
    int nums = introNums(s);
    printf("- Foram introduzidos %d numeros", nums);
    printf("\n# ordem crescente: %s", ordemCrescente(s,nums) ? "Verdadeiro" : "Falso");
    printf("\n# alterando positivo/negativo: %s", seqAlternada(s,nums) ? "Verdadeiro" : "Falso");
    printf("\n# sequencia sem repeticoes: %s", semRepticoes(s,nums)? "Verdadeiro" : "Falso");
}