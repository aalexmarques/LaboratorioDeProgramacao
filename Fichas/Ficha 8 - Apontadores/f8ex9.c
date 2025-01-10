#include <stdio.h>
#define MESES 12


float *procura(float *dados, float temp){
    float *occorMes;
    for (int i = 0; i < MESES; i++){
        if(dados[i] == temp) return &dados[i];
    }
    return NULL;
}

void inserir(float *dadosTemp){
    for (int i = 0; i < MESES; i++){
        printf("[%d]: ",i+1);
        scanf("%f", &dadosTemp[i]);
    }
}

float *maxima(float *dados){
    float *pmax = dados;
    for (int i = 1; i < MESES; i++){
        if (*pmax <= dados[i]) pmax = &dados[i];
    }
    return pmax;
}

float *minima(float *dados){
    float *pmin = dados;
    for (int i = 1; i < MESES; i++){
        if (*pmin >= dados[i]) pmin = &dados[i];
    }
    return pmin;
}

float media(float *dados){
    float soma = 0;
    for (int i = 0; i < MESES; i++){
        soma += dados[i];
    }
    return soma/MESES;
}

void imprimirTemps(float *min, float *max, float media){
    printf("\n\nA temperatura minima do ano: %.2f\nA temperatura maxima do ano: %.2f\nA temperatura media de todos os 12 meses: %.2f\nA amplitude termica: %.2f",*min,*max,media,*max-*min);
}

int main(){
    float temp[MESES], *occorTempMes, temperatura;
    printf("Introduza as temperaturas medias de cada mes no ano:\n");
    inserir(temp);
    
    printf("Introduza a temperatura a procurar:\n");
    scanf("%f",&temperatura); occorTempMes = procura(temp,temperatura);
    printf("O mes correspondente 'a temperatura %.2f e %d",temperatura, (int)(occorTempMes-temp)+1); 
    //vai dar a diferença entre o mes encontrado e a posicao incial +1 assim indicando os messes utilizasse um cast para a diferenca ser um int

    imprimirTemps(minima(temp),maxima(temp),media(temp));

}

/*

#include <stdio.h>
#define TEMPM 12 // Define uma constante para o número de meses

// Função para procurar uma temperatura específica nos dados
float* procura(float* dados, float temp) {
    float* pi; // Ponteiro para iterar pelos dados
    for (pi = dados; pi < dados + TEMPM; pi++) { // Loop através dos dados
        if (*pi == temp) // Se o valor atual for igual à temperatura procurada
            return pi; // Retorna o ponteiro para a temperatura encontrada
    }
    return NULL; // Se não encontrar, retorna NULL
}

// Função para encontrar a temperatura máxima nos dados
float* maxima(float* dados) {
    float* pmax; // Ponteiro para a temperatura máxima
    int i;
    pmax = dados; // Inicializa pmax com o primeiro elemento
    for (i = 1; i < TEMPM; i++) { // Loop através dos dados a partir do segundo elemento
        if (*pmax < *(dados + i)) // Se o elemento atual for maior que pmax
            pmax = dados + i; // Atualiza pmax para o elemento atual
    }
    return pmax; // Retorna o ponteiro para a temperatura máxima
}

// Função para encontrar a temperatura mínima nos dados
float* minima(float* dados) {
    float* pmin; // Ponteiro para a temperatura mínima
    int i;
    pmin = dados; // Inicializa pmin com o primeiro elemento
    for (i = 1; i < TEMPM; i++) { // Loop através dos dados a partir do segundo elemento
        if (*pmin > *(dados + i)) // Se o elemento atual for menor que pmin
            pmin = dados + i; // Atualiza pmin para o elemento atual
    }
    return pmin; // Retorna o ponteiro para a temperatura mínima
}

// Função para calcular a média das temperaturas
float media(float* dados) {
    int i;
    float media = 0; // Inicializa a soma das temperaturas
    for (i = 0; i < TEMPM; i++) { // Loop através dos dados
        media += *(dados + i) / TEMPM; // Adiciona cada temperatura dividida pelo número de meses
    }
    return media; // Retorna a média das temperaturas
}

int main() {
    float temp[TEMPM]; // Array para armazenar as temperaturas de cada mês
    float* ptemp = temp; // Ponteiro para o array de temperaturas
    float apro; // Variável para armazenar a temperatura a ser procurada
    float* pencontrada; // Ponteiro para a temperatura encontrada
    float* pmax; // Ponteiro para a temperatura máxima
    float* pmin; // Ponteiro para a temperatura mínima
    float amplitude; // Variável para armazenar a amplitude (diferença entre max e min)
    float medi; // Variável para armazenar a média das temperaturas
    int i;

    // Solicita ao usuário que insira as temperaturas
    printf("Introduza os valores de temp: ");
    for (i = 0; i < TEMPM; i++) {
        scanf("%f", ptemp + i); // Lê cada temperatura no array
    }

    // Solicita ao usuário que insira a temperatura a ser procurada
    printf("Introduza o temperatura a procurar: ");
    scanf("%f", &apro); // Lê a temperatura a ser procurada

    // Procura a temperatura nos dados
    pencontrada = procura(ptemp, apro);
    if (pencontrada != NULL) {
        printf("Temperatura encontrada no mes: %d\n", (int)(pencontrada - ptemp) + 1); // Imprime o mês em que a temperatura foi encontrada
    } else {
        printf("Temperatura nao encontrada\n"); // Imprime se a temperatura não foi encontrada
    }

    // Encontra a temperatura máxima e mínima
    pmax = maxima(ptemp);
    pmin = minima(ptemp);

    // Calcula a amplitude (diferença entre max e min)
    amplitude = *pmax - *pmin;

    // Calcula a média das temperaturas
    medi = media(ptemp);

    // Imprime os resultados
    printf("Maxima: %.2f\n", *pmax);
    printf("Minima: %.2f\n", *pmin);
    printf("Amplitude: %.2f\n", amplitude);
    printf("Media: %.2f\n", medi);

    return 0;
}

*/