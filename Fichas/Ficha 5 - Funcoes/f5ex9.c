#include <stdio.h>

// verifica se o ano é bissexto
int bisexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// retorna o último dia do mês no ano 
int ultimo(int mes, int ano) {
    switch (mes) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return bisexto(ano) ? 29 : 28;
        default:
            return 31;
    }
}

// valida se uma data é válida
int valida(int dia, int mes, int ano) {
    if (mes < 1 || mes > 12 || dia < 1 || dia > ultimo(mes, ano)) return 0;
    return 1;
}

// calcula o número do dia no ano para uma data específica
int dia_ano(int dia, int mes, int ano) {
    int total_dias = 0;
    for (int i = 1; i < mes; i++) {
        total_dias += ultimo(i, ano);
    }
    total_dias += dia;
    return total_dias;
}

// calcula o número de dias entre duas datas
int dias_entre(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    int total_dias = 0;

    // caso as datas estejam no mesmo ano
    if (ano1 == ano2) {
        return dia_ano(dia2, mes2, ano2) - dia_ano(dia1, mes1, ano1);
    }

    // dias restantes do primeiro ano
    total_dias += (bisexto(ano1) ? 366 : 365) - dia_ano(dia1, mes1, ano1);

    // dias completos dos anos intermediários
    for (int i = ano1 + 1; i < ano2; i++) {
        total_dias += bisexto(i) ? 366 : 365;
    }

    // dias do último ano até a data final
    total_dias += dia_ano(dia2, mes2, ano2);

    return total_dias;
}


int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Data de nascimento [dia/mes/ano]: ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Data de hoje [dia/mes/ano]: ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);


    printf("%d dias ja vividos.\n", dias_entre(dia1, mes1, ano1, dia2, mes2, ano2));

    return 0;
}
