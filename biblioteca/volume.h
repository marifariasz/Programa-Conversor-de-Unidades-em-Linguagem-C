#include <stdio.h>
#include <string.h>

double converter_volume()
{

    int opcao;
    float medida, conversao;

    do
    {
      //Menu de escolha de opções
        printf("\nBem-vindo ao conversor de unidades de volume!\n\n");
        printf("(1)Metro cubico para centimetro cubico\n");
        printf("(2)Centimetro cubico para metro cubico\n");
        printf("(3)Encerrar o programa\n\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch(opcao){

            //Conversão de m^3 para cm^3
            case 1:
              printf("\n\nDigite o valor em metros cubicos: ");
              scanf("%f", &medida);
              conversao = medida*1000000;
              printf("O valor da medida em centrimetros cubicos, eh: %lf",conversao);
              break;

            //Conversão de cm^3 para m^3
            case 2:
              printf("\n\nDigite o valor em centimetro cubicos: ");
              scanf("%f", &medida);
              conversao = medida/1000000.0f;
              printf("O valor da medida em centimetros cubicos, eh: %.8f", conversao);
              break;

            //Encerramento da aplicação
            case 3:
              printf("Muito obrigado por utilizar a aplicacao!");
              break;

            //Caso usuário insira opcoes invalidas
            default:
              printf("Opcao invalida!");
              return -1;  
        }
    } while(opcao != 3);
    
    return 0;
}
