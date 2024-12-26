#include <stdio.h>

double converter_potencia() {
    // Fatores de conversão
    double fator_W_para_kW = 0.001;
    double fator_W_para_cv = 1.0 / 735.49875;
    double fator_W_para_hp = 1.0 / 745.699872;
    double resultado = 0;
    double valor = 0; 

    int opcao_origem, opcao_destino;

    printf("Digite o valor da potência: ");
    scanf("%lf", &valor);

    printf("Escolha a unidade de origem:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalo-vapor (cv)\n");
    printf("4 - Horsepower (hp)\n");
    printf("Opção: ");
    scanf("%d", &opcao_origem);

    printf("Escolha a unidade de destino:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalo-vapor (cv)\n");
    printf("4 - Horsepower (hp)\n");
    printf("Opção: ");
    scanf("%d", &opcao_destino);

    // Converter a unidade de origem para Watts (W)
    switch (opcao_origem) {
        case 1: // W
            break; // Já está em Watts
        case 2: // kW
            valor = valor / fator_W_para_kW;
            break;
        case 3: // cv
            valor = valor * 735.49875;
            break;
        case 4: // hp
            valor = valor * 745.699872;
            break;
        default:
            printf("Opção de origem inválida!\n");
            return -1;
    }

    // Converter de Watts (W) para a unidade de destino
    switch (opcao_destino) {
        case 1: // W
            resultado = valor;
            break;
        case 2: // kW
            resultado = valor * fator_W_para_kW;
            break;
        case 3: // cv
            resultado = valor * fator_W_para_cv;
            break;
        case 4: // hp
            resultado = valor * fator_W_para_hp;
            break;
        default:
            printf("Opção de destino inválida!\n");
            return -1;
    }

    printf("Resultado: %.4lf na unidade escolhida.\n", resultado);
    return resultado;
}
