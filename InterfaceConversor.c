#include <stdio.h>
#include "./potencia.h"

int main(){
    int option = 0;
    do {
        // Exibe o menu
        printf("\nMenu de Conversoes:\n");
        printf("1. Unidades de comprimento\n");
        printf("2. Unidades de massa\n");
        printf("3. Unidades de temperatura\n");
        printf("4. Unidades de velocidade\n");
        printf("5. Unidades de potencia\n");
        printf("6. Unidades de area\n");
        printf("7. Unidades de tempo\n");
        printf("8. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &option);

        switch (option){
            case 1:
            /* code */
            break;
            case 2:
            /* code */
            break;
            case 3:
            /* code */
            break;
            case 4:
            /* code */
            break;
            case 5:
            converter_potencia();
            break;
            case 6:
            /* code */
            break;
            case 7:
            /* code */
            break;
            case 8:
            printf("\nEncerrando.\n");
            break;
            default:
            printf("\nVoce digitou um numero invalido, tente novamente.\n");
            main();
            break;
        }
    }while(option != 8);
}