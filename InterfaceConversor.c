#include <stdio.h>
#include "./biblioteca/potencia.h"
#include "./biblioteca/comprimento.h"
#include "./biblioteca/massa.h"
#include "./biblioteca/temperatura.h"
#include "./biblioteca/velocidade.h"
#include "./biblioteca/area.h"
#include "./biblioteca/tempo.h"
#include "./biblioteca/volume.h"
#include "./biblioteca/memoria.h"

int main()
{
    int option = 0;
    do
    {
        // Exibe o menu
        printf("\nMenu de Conversoes:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de massa\n");
        printf("3. Unidades de temperatura\n");
        printf("4. Unidades de velocidade\n");
        printf("5. Unidades de potencia\n");
        printf("6. Unidades de area\n");
        printf("7. Unidades de tempo\n");
        printf("8. Unidades de volume\n");
        printf("9. Unidades de volume\n");
        printf("10. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            converter_comprimento();
            break;
        case 2:
            converter_massa();
            break;
        case 3:
            converter_temperatura();
            break;
        case 4:
            converter_velocidade();
            break;
        case 5:
            converter_potencia();
            break;
        case 6:
            converter_area();
            break;
        case 7:
            converter_tempo();
            break;
        case 8:
            converter_volume();
            break;
        case 9:
            converter_unidade_memoria();
            break;
        case 10:
            printf("\nEncerrando.\n");
            break;
        default:
            printf("\nVoce digitou um numero invalido, tente novamente.\n");
            main();
            break;
        }
    } while (option != 9);
}