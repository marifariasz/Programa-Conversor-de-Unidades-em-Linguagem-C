#include <stdio.h>
#include <string.h>
#include <locale.h>

// Funções para conversão de unidades

double gramas_para_quilogramas(double gramas)
{
    return gramas / 1000.0;
}

double gramas_para_libras(double gramas)
{
    return gramas / 453.592;
}

double quilogramas_para_libras(double quilogramas)
{
    return quilogramas * 2.20462;
}

double libras_para_quilogramas(double libras)
{
    return libras * 0.453592;
}

void conversordemassa()
{

    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao;
    double valor;

    do
    {
        // Menu de opções
        printf("\nMenu de Conversão:\n");
        printf("1. Gramas para Quilogramas\n");
        printf("2. Gramas para Libras\n");
        printf("3. Quilogramas para Gramas\n");
        printf("4. Libras para Gramas\n");
        printf("5. Quilogramas para Libras\n"); // adicionado nova conversão
        printf("6. Libras para Quilogramas\n"); // adicionado nova conversão
        printf("0. Sair\n");

        // Leitura da opção escolhida pelo usuário
        printf("Escolha opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor em gramas: ");
            scanf("%lf", &valor);
            printf("%.2lf gramas equivalem a %.2lf quilogramas.\n", valor, gramas_para_quilogramas(valor));
            break; // adicionado break, código estava dando erro
        case 2:
            // ... (outros casos)
        case 3:
            // ... (outros casos)
        case 4:
            printf("Digite o valor em libras: ");
            scanf("%lf", &valor);
            printf("%.2lf libras equivalem a %.2lf gramas.\n", valor, libras_para_quilogramas(valor) * 1000.0);
            break; // adicionado break, código estava dando erro
        case 5:
            // ... (outros casos)
        case 6:
            printf("Digite o valor em libras: ");
            scanf("%lf", &valor);
            printf("%.2lf libras equivalem a %.2lf quilogramas.\n", valor, libras_para_quilogramas(valor));
            break; // adicionado break, código estava dando erro
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
}