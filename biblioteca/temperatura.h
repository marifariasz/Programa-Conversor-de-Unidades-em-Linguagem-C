#include <stdio.h>

// Funções de conversão de temperaturas

// Celsius para Fahrenheit
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Fahrenheit para Celsius
double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

// Celsius para Kelvin
double celsiusParaKelvin(double celsius) {
    return celsius + 273.15;
}

// Kelvin para Celsius
double kelvinParaCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Celsius para Réaumur
double celsiusParaReaumur(double celsius) {
    return celsius * 4.0 / 5.0;
}

// Réaumur para Celsius
double reaumurParaCelsius(double reaumur) {
    return reaumur * 5.0 / 4.0;
}

// Fahrenheit para Rankine
double fahrenheitParaRankine(double fahrenheit) {
    return fahrenheit + 459.67;
}

// Rankine para Fahrenheit
double rankineParaFahrenheit(double rankine) {
    return rankine - 459.67;
}

// Celsius para Rankine
double celsiusParaRankine(double celsius) {
    return (celsius * 9.0 / 5.0) + 491.67;
}

// Rankine para Celsius
double rankineParaCelsius(double rankine) {
    return (rankine - 491.67) * 5.0 / 9.0;
}

// Fahrenheit para Kelvin
double fahrenheitParaKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

// Kelvin para Fahrenheit
double kelvinParaFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

// Kelvin para Réaumur
double kelvinParaReaumur(double kelvin) {
    return (kelvin - 273.15) * 4.0 / 5.0;
}

// Réaumur para Kelvin
double reaumurParaKelvin(double reaumur) {
    return (reaumur * 5.0 / 4.0) + 273.15;
}

// Réaumur para Fahrenheit
double reaumurParaFahrenheit(double reaumur) {
    return (reaumur * 9.0 / 4.0) + 32.0;
}

// Fahrenheit para Réaumur
double fahrenheitParaReaumur(double fahrenheit) {
    return (fahrenheitParaCelsius(fahrenheit) * 4.0 / 5.0);
}

// Kelvin para Rankine
double kelvinParaRankine(double kelvin) {
    return kelvin * 9.0 / 5.0;
}

// Rankine para Kelvin
double rankineParaKelvin(double rankine) {
    return rankine * 5.0 / 9.0;
}

// Réaumur para Rankine
double reaumurParaRankine(double reaumur) {
    return (reaumur * 9.0 / 4.0) + 491.67;
}

// Rankine para Réaumur
double rankineParaReaumur(double rankine) {
    return (rankine - 491.67) * 4.0 / 9.0;
}

// Menu para escolher a escala
void exibirMenu() {
    printf("\nEscolha a escala de temperatura:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("4. Reaumur\n");
    printf("5. Rankine\n");
    printf("Digite o numero correspondente a escala: ");
}

void converter_temperatura() {
    int escolha1, escolha2;
    double temperatura, resultado;

    // Solicitar escala inicial
    exibirMenu();
    scanf("%d", &escolha1);

    // Solicitar escala de destino
    printf("\nEscolha a escala para converter:\n");
    exibirMenu();
    scanf("%d", &escolha2);

    // Solicitar o valor da temperatura
    printf("\nDigite a temperatura: ");
    scanf("%lf", &temperatura);

    // Conversão com base nas escolhas
    switch (escolha1) {
        case 1: // Celsius
            if (escolha2 == 2) resultado = celsiusParaFahrenheit(temperatura);
            else if (escolha2 == 3) resultado = celsiusParaKelvin(temperatura);
            else if (escolha2 == 4) resultado = celsiusParaReaumur(temperatura);
            else if (escolha2 == 5) resultado = celsiusParaRankine(temperatura);
            else if (escolha2 == 1) resultado = temperatura;
            break;
        case 2: // Fahrenheit
            if (escolha2 == 1) resultado = fahrenheitParaCelsius(temperatura);
            else if (escolha2 == 3) resultado = fahrenheitParaKelvin(temperatura);
            else if (escolha2 == 5) resultado = fahrenheitParaRankine(temperatura);
            else if (escolha2 == 4) resultado = fahrenheitParaReaumur(temperatura);
            else if (escolha2 == 2) resultado = temperatura;
            break;
        case 3: // Kelvin
            if (escolha2 == 1) resultado = kelvinParaCelsius(temperatura);
            else if (escolha2 == 2) resultado = kelvinParaFahrenheit(temperatura);
            else if (escolha2 == 4) resultado = kelvinParaReaumur(temperatura);
            else if (escolha2 == 5) resultado = kelvinParaRankine(temperatura);
            else if (escolha2 == 3) resultado = temperatura;
            break;
        case 4: // Reaumur
            if (escolha2 == 1) resultado = reaumurParaCelsius(temperatura);
            else if (escolha2 == 3) resultado = reaumurParaKelvin(temperatura);
            else if (escolha2 == 5) resultado = reaumurParaRankine(temperatura);
            else if (escolha2 == 2) resultado = reaumurParaFahrenheit(temperatura);
            else if (escolha2 == 4) resultado = temperatura;
            break;
        case 5: // Rankine
            if (escolha2 == 1) resultado = rankineParaCelsius(temperatura);
            else if (escolha2 == 2) resultado = rankineParaFahrenheit(temperatura);
            else if (escolha2 == 3) resultado = rankineParaKelvin(temperatura);
            else if (escolha2 == 4) resultado = rankineParaReaumur(temperatura);
            else if (escolha2 == 5) resultado = temperatura;
            break;
        default:
            printf("\nEscolha invalida!\n");
            return 1;
    }

    // Exibir resultado
    printf("\nTemperatura convertida: %.2f\n", resultado);

    return 0;
}
