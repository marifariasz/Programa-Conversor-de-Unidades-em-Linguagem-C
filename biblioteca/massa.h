#include <stdio.h>
#include <locale.h>

// Funções para conversão de unidades

double gramas_para_quilogramas(double gramas)
{
    return gramas / 1000.0;
}

double quilogramas_para_gramas(double quilogramas)
{
    return quilogramas * 1000;
}

double toneladas_para_gramas(double toneladas)
{
    return toneladas * 1000000;
}

double toneladas_para_quilogramas(double toneladas)
{
    return toneladas * 1000;
}

double gramas_para_toneladas(double gramas)
{
    return gramas / 1000000;
}

double quilogramas_para_toneladas(double quilogramas)
{
    return quilogramas / 1000;
}

void converter_massa()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int opcao;
    double valor;

    do
    {
        // Menu de opções - Alteração no menu
        printf("\nMenu de Conversão:\n");
        printf("Conversões a partir de Gramas:\n");
        printf("1. Gramas para Quilogramas\n");
        printf("2. Gramas para Toneladas\n");
        printf("Conversões a partir de Quilogramas:\n");
        printf("3. Quilogramas para Gramas\n");
        printf("4. Quilogramas para Toneladas\n");
        printf("Conversões a partir de Toneladas:\n");
        printf("5. Toneladas para Gramas\n");
        printf("6. Toneladas para Quilogramas\n");
        printf("0. Sair\n");

        // Leitura da opção escolhida pelo usuário
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // Gramas para Quilogramas
            printf("Digite o valor em gramas: ");
            scanf("%lf", &valor);
            printf("%.2lf gramas equivalem a %.2lf quilogramas.\n", valor, gramas_para_quilogramas(valor));
            break;
        case 2: // Gramas para Toneladas
            printf("Digite o valor em gramas: ");
            scanf("%lf", &valor);
            printf("%.2lf gramas equivalem a %.2lf toneladas.\n", valor, gramas_para_toneladas(valor));
            break;
        case 3: // Quilogramas para Gramas
            printf("Digite o valor em quilogramas: ");
            scanf("%lf", &valor);
            printf("%.2lf quilogramas equivalem a %.2lf gramas.\n", valor, quilogramas_para_gramas(valor));
            break;
        case 4: // Quilogramas para Toneladas
            printf("Digite o valor em quilogramas: ");
            scanf("%lf", &valor);
            printf("%.2lf quilogramas equivalem a %.2lf toneladas.\n", valor, quilogramas_para_toneladas(valor));
            break;
        case 5: // Toneladas para Gramas
            printf("Digite o valor em toneladas: ");
            scanf("%lf", &valor);
            printf("%.2lf toneladas equivalem a %.2lf gramas.\n", valor, toneladas_para_gramas(valor));
            break;
        case 6: // Toneladas para Quilogramas
            printf("Digite o valor em toneladas: ");
            scanf("%lf", &valor);
            printf("%.2lf toneladas equivalem a %.2lf quilogramas.\n", valor, toneladas_para_quilogramas(valor));
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
        }
    } while (opcao != 0);
}