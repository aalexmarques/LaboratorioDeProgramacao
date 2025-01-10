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
int valida(int d[3]) {
    int dia = d[0], mes = d[1], ano = d[2];
        if (mes < 1 || mes > 12 || dia < 1 || dia > ultimo(mes, ano)) return 0;
    return 1;
}

// calcula o número do dia no ano para uma data específica
int dia_ano(int d[3]) {
    int total_dias = 0;
    for (int i = 1; i < d[1]; i++) {
        total_dias += ultimo(i, d[2]);
    }
    total_dias += d[0];
    return total_dias;
}

// calcula o número de dias entre duas datas
int dias_entre(int d1[3], int d2[3]) {
    int total_dias = 0;

    // caso as datas estejam no mesmo ano
    if (d1[2] == d2[2]) {
        return dia_ano(d2) - dia_ano(d1);
    }

    // dias restantes do primeiro ano
    total_dias += (bisexto(d1[2]) ? 366 : 365) - dia_ano(d1);

    // dias completos dos anos intermediários
    for (int i = d1[2] + 1; i < d2[2]; i++) {
        total_dias += bisexto(i) ? 366 : 365;
    }

    // dias do último ano até a data final
    total_dias += dia_ano(d2);

    return total_dias;
}

int compararDatas(int d1[3], int d2[3]){
    if (d1[2] != d2[2]) return d1[2] - d2[2]; 
    if (d2[1] != d2[1]) return d1[1] - d2[1];
    return d1[0] - d2[0];
    
    return 0;
}

int calcularIdade(int nasc[3], int atual[3]){
    int idade = atual[2] - nasc[2];

    //verificar se já completou o aniversario
    if (atual[1] < nasc[1] || (atual[1] == nasc[1] && atual[0] < nasc[0]))
        idade--;
    return idade;
}


int main() {
    int dn[3],dh[3];

    printf("Data de nascimento [dia/mes/ano]: ");
    scanf("%d/%d/%d", &dn[0], &dn[1], &dn[2]);

    printf("Data de hoje [dia/mes/ano]: ");
    scanf("%d/%d/%d", &dh[0], &dh[1], &dh[2]);

    if(!valida(dn) || !valida(dh)){
        printf("Pelo menos uma das datas é invalida.\n");
        return 1;    
    }

    printf("%d dias ja vividos.\n", dias_entre(dn, dh));

    int comp = compararDatas(dn,dh);
    if (comp == 0){
        printf("A data de nascimento e data de hoje sao iguais\n");
    }
    if(comp > 0){
        printf("A data de nascimento e posterior a data de hoje\n");
    }else{
        printf("A data de nascimento e anterior a data de hoje\n");
    }

    printf("Idade autal: %d anos.", calcularIdade(dn,dh));
    return 0;
}
