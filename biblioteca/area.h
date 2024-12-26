#include <stdio.h>

double converter_area() {
    int unidadeInicial, unidadeFinal;
    double valorInicial, valorConvertido;
    double fatorInicial, fatorFinal;

    do {
        printf("\n=== Conversor de Unidades de Área ===\n\n");

        // Seleção da unidade inicial
        printf("Escolha a unidade de medida inicial:\n");
        printf("1. Centímetro Quadrado (cm²)\n");
        printf("2. Metro Quadrado (m²)\n");
        printf("3. Quilômetro Quadrado (km²)\n");
        printf("Digite sua escolha (1-3, ou 0 para sair): ");
        scanf("%d", &unidadeInicial);

        if (unidadeInicial == 0) break;

        if (unidadeInicial < 1 || unidadeInicial > 3) {
            printf("Unidade de entrada inválida!\n");
            continue;
        }

        // Entrada do valor a ser convertido
        printf("Digite o valor em %s: ",
               unidadeInicial == 1 ? "Centímetro Quadrado (cm²)" :
               unidadeInicial == 2 ? "Metro Quadrado (m²)" : "Quilômetro Quadrado (km²)");
        scanf("%lf", &valorInicial);

        if (valorInicial < 0) {
            printf("Valor inválido.\n");
            continue;
        }

        // Seleção da unidade final
        printf("\nEscolha a unidade de medida final:\n");
        printf("1. Centímetro Quadrado (cm²)\n");
        printf("2. Metro Quadrado (m²)\n");
        printf("3. Quilômetro Quadrado (km²)\n");
        printf("Digite sua escolha (1-3, ou 0 para sair): ");
        scanf("%d", &unidadeFinal);

        if (unidadeFinal == 0) break;

        if (unidadeFinal < 1 || unidadeFinal > 3) {
            printf("Unidade de saída inválida!\n");
            continue;
        }

        // Obtem os fatores de conversão
        fatorInicial = unidadeInicial == 1 ? 0.0001 : unidadeInicial == 2 ? 1.0 : 1000000.0;
        fatorFinal = unidadeFinal == 1 ? 0.0001 : unidadeFinal == 2 ? 1.0 : 1000000.0;

        // Realiza a conversão
        valorConvertido = valorInicial * fatorInicial / fatorFinal;

        printf("\n%.3lf %s equivalem a %.3lf %s.\n", valorInicial,
               unidadeInicial == 1 ? "Centímetro Quadrado (cm²)" :
               unidadeInicial == 2 ? "Metro Quadrado (m²)" : "Quilômetro Quadrado (km²)",
               valorConvertido,
               unidadeFinal == 1 ? "Centímetro Quadrado (cm²)" :
               unidadeFinal == 2 ? "Metro Quadrado (m²)" : "Quilômetro Quadrado (km²)");
    } while (1);

    return 0;
}