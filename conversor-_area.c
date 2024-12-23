#include <stdio.h>

void exibirMenu() {
    printf("Escolha a unidade de medida:\n");
    printf("1. Centímetro Quadrado (cm²)\n");
    printf("2. Metro Quadrado (m²)\n");
    printf("3. Quilômetro Quadrado (km²)\n");
    printf("Digite sua escolha (1-3): ");
}

double obterFator(int escolha) {
    switch (escolha) {
        case 1:
            return 0.0001;          // 1 cm² = 0.0001 m²
        case 2:
            return 1.0;             // 1 m² = 1 m²
        case 3:
            return 1000000.0;       // 1 km² = 1.000.000 m²
        default:
            return -1.0;            // Valor inválido
    }
}

// Função para obter o nome da unidade com base na escolha
const char* obterNomeUnidade(int escolha) {
    switch (escolha) {
        case 1:
            return "Centímetro Quadrado (cm²)";
        case 2:
            return "Metro Quadrado (m²)";
        case 3:
            return "Quilômetro Quadrado (km²)";
        default:
            return "Desconhecida";
    }
}

int main() {
    int unidadeInicial, unidadeFinal;
    double valorInicial, valorConvertido;
    double fatorInicial, fatorFinal;

    printf("=== Conversor de Unidades de Área ===\n\n");

    // Seleção da unidade inicial
    exibirMenu();
    if (scanf("%d", &unidadeInicial) != 1 || unidadeInicial < 1 || unidadeInicial > 3) {
        printf("Escolha inválida para a unidade inicial.\n");
        return 1;
    }

    // Entrada do valor a ser convertido
    printf("Digite o valor em %s: ", obterNomeUnidade(unidadeInicial));
    if (scanf("%lf", &valorInicial) != 1 || valorInicial < 0) {
        printf("Valor inválido.\n");
        return 1;
    }

    // Seleção da unidade final
    printf("\nEscolha a unidade para a conversão:\n");
    exibirMenu();
    if (scanf("%d", &unidadeFinal) != 1 || unidadeFinal < 1 || unidadeFinal > 3) {
        printf("Escolha inválida para a unidade final.\n");
        return 1;
    }

    // Obter os fatores de conversão
    fatorInicial = obterFator(unidadeInicial);
    fatorFinal = obterFator(unidadeFinal);

    if (fatorInicial == -1.0 || fatorFinal == -1.0) {
        printf("Erro na obtenção dos fatores de conversão.\n");
        return 1;
    }

    // Realizar a conversão
    valorConvertido = valorInicial * fatorInicial / fatorFinal;

    printf("\n%.3lf %s equivalem a %.3lf %s.\n",
           valorInicial, obterNomeUnidade(unidadeInicial),
           valorConvertido, obterNomeUnidade(unidadeFinal));

    return 0;
}