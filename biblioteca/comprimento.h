#include <stdio.h>

double converter_comprimento(){
	short int unidadeEntrada;
	short int unidadeSaida;
	double valor;

    do{
	    printf("\n\nConversor de comprimento\n");
	    printf("\nUnidades de entrada");
	    printf("\n1. metro\n");
	    printf("2. centimetro\n");
	    printf("3. milimetro\n");
	    printf("\nSelecione a unidade de entrada [insira 0 para sair]: ");
	    scanf("%hd", &unidadeEntrada);
        
        if(unidadeEntrada == 0)
            break;

	    printf("\nInsira o valor da unidade de entrada: ");
	    scanf("%lf", &valor);

        printf("\nUnidades de destino");
	    printf("\n1. metro\n");
	    printf("2. centimetro\n");
	    printf("3. milimetro\n");
	    printf("\nSelecione a unidade de destino  [insira 0 para sair]: ");
	    scanf("%hd", &unidadeSaida);
	    
	    if(unidadeSaida == 0)
            break;
	    
        if(unidadeSaida < 1 || unidadeSaida > 3){
            printf("Unidade de saida invalida!");
            return -1;
        }

	    switch(unidadeEntrada)
	    {
	    case 1:
	        printf("\n%.2lf metros equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf metros", valor);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf centimetros", valor*=100);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf milimetros", valor*=1000);
	    	break;
	    case 2:
	        printf("%.2lf centimetros equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf metros", valor/=100);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf centimetros", valor);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf milimetros", valor*=10);
	    	break;
	    case 3:
	        printf("%.3lf milimetros equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.3lf metros", valor/=1000);
	    	if(unidadeSaida == 2)
	    	    printf("%.3lf centimetros", valor/=10);
	    	if(unidadeSaida == 3)
	    	     printf("%.3lf milimetros", valor);
	    	break;

	    default:
            printf("Unidade de entrada invalida!");
	    	return -1;
	    }
    }while (unidadeEntrada != 0);

	return 0;
}