#include <stdio.h>
#include <string.h>

double converter_tempo() {
    int opcao;
    float valor, resultado;

    do {
        // Menu principal para unidades de tempo
        printf("\n--- Conversor de Unidades de Tempo ---\n");
        printf("1. Segundos para Minutos\n");
        printf("2. Minutos para Horas\n");
        printf("3. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Segundos para Minutos
                printf("\nDigite o valor em segundos: ");
                scanf("%f", &valor);
                resultado = valor / 60; // Conversão
                printf("Resultado: %.2f minutos\n", resultado);
                break;
            case 2: // Minutos para Horas
                printf("\nDigite o valor em minutos: ");
                scanf("%f", &valor);
                resultado = valor / 60; // Conversão
                printf("Resultado: %.2f horas\n", resultado);
                break;
            case 3: // Sair
                printf("\nObrigado por usar o Conversor de Unidades de Tempo. Até mais!\n");
                break;
            default:
                printf("\nOpção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}