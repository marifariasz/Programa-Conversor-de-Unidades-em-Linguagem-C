#include <stdio.h>
#include <string.h>

double converter_velocidade(){
    int opcao;
    float valor, resultado;
    
    do {
        // Menu principal para unidades de tempo
        printf("\n ---Conversor de Unidades de Velocidade ---\n");
        printf("\nEscolha uma opcao: \n");
        printf("1. m/s para km/h \n");
        printf("2. km/h para m/s \n");
        printf("3. Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // m/s para km/h
                printf("\nDigite o valor em m/s: ");
                scanf("%f", &valor);
                resultado = valor*3.6; // Conversão
                printf("Resultado: %.2f km/h\n", resultado);
                break;
            case 2: // km/h para m/s
                printf("\nDigite o valor em km/h: ");
                scanf("%f", &valor);
                resultado = valor / 3.6; // Conversão
                printf("Resultado: %.2f m/s\n", resultado);
                break;
            case 3: // Sair
                break;
            default:
                printf("\nOpção inválida.\n");
                break;
        }
    } while (opcao != 3);

    return 0;
}