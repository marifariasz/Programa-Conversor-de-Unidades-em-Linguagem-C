// converter.c
#include <stdio.h>
#include "converter.h"

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