#include <stdio.h>
#include <string.h>

double converter_potencia() {
    // Fatores de conversão
    double fator_W_para_kW = 0.001;
    double fator_W_para_cv = 1.0 / 735.49875;
    double fator_W_para_hp = 1.0 / 745.699872;
    double resultado = 0;
    double valor = 0; 

    char unidade_origem[10], unidade_destino[10];

    printf("Digite o valor da potência: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (W, kW, cv, hp): ");
    scanf("%s", unidade_origem);

    printf("Digite a unidade de destino (W, kW, cv, hp): ");
    scanf("%s", unidade_destino);


    // Converter a unidade de origem para Watts (W)
    if (strcmp(unidade_origem, "kW") == 0) {
        valor = valor / fator_W_para_kW;
    } else if (strcmp(unidade_origem, "cv") == 0) {
        valor = valor * 735.49875;
    } else if (strcmp(unidade_origem, "hp") == 0) {
        valor = valor * 745.699872;
    } else if (strcmp(unidade_origem, "W") != 0) {
        printf("Unidade de origem inválida!\n");
        valor = valor;
        return -1;
    }

    // Converter de Watts (W) para a unidade de destino
    if (strcmp(unidade_destino, "kW") == 0) {
        resultado = valor * fator_W_para_kW;
    } else if (strcmp(unidade_destino, "cv") == 0) {
        resultado =  valor * fator_W_para_cv;
    } else if (strcmp(unidade_destino, "hp") == 0) {
        resultado =  valor * fator_W_para_hp;
    } else if (strcmp(unidade_destino, "W") == 0) {
        resultado =  valor;
    } else {
        printf("Unidade de destino inválida!\n");
        return -1;
    }
    printf("Resultado: %.4lf %s\n", resultado, unidade_destino);
    return resultado;
}