#include <stdio.h>
#define MAX 100

float media(float s[], int n){
    float TotalSum =0;
    for(int i = 0; i<n; i++){
        TotalSum += s[i];
    }
    return TotalSum/n;
}

void impressaoAcimaDaMedia(float s[], int n){
    for (int i = 0; i<n; i++){
        if(s[i] > media(s,n)){
            printf("\n- %.2f", s[i]);
        }
    }
}

int inserirNotas(float s[]){
    int i;
    while(i<MAX){
        printf("%d: ",i+1);
        scanf("%f",&s[i]);
        if(s[i] < 0) break;
        i++;
    }
    return i;
}

int main(){
    float s[MAX];
    int num = inserirNotas(s);
    printf("- Notas acima da media (%.2f)",media(s,num));
    impressaoAcimaDaMedia(s,num);
}