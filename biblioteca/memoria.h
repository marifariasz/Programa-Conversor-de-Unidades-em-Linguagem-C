#include <stdio.h>

double converter_unidade_memoria(){
	short int unidadeEntrada;
	short int unidadeSaida;
	double valor;

    do{
	    printf("\n\nConversor de unidades de memoria\n");
	    printf("\nUnidades de entrada");
	    printf("\n1. bit\n");
	    printf("2. byte\n");
	    printf("3. megabyte\n");
	    printf("4. kilobyte\n");
	    printf("5. gigabyte\n");
        printf("6. terabyte\n");
	    printf("\nSelecione a unidade de entrada [insira 0 para sair]: ");
	    scanf("%hd", &unidadeEntrada);
        
        if(unidadeEntrada == 0)
            break;

	    printf("\nInsira o valor da unidade de entrada: ");
	    scanf("%lf", &valor);

        printf("\nUnidades de destino");
	    printf("\n1. bit\n");
	    printf("2. byte\n");
        printf("3. megabyte\n");
	    printf("4. kilobyte\n");
	    printf("5. gigabyte\n");
        printf("6. terabyte\n");
	    printf("\nSelecione a unidade de destino  [insira 0 para sair]: ");
	    scanf("%hd", &unidadeSaida);
	    
	    if(unidadeSaida == 0)
            break;
	    
        if(unidadeSaida < 1 || unidadeSaida > 5){
            printf("Unidade de saida invalida!");
            return -1;
        }

	    switch(unidadeEntrada)
	    {
	    case 1:
	        printf("\n%.2lf bits equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor/=8);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor/=8000000);
	    	if(unidadeSaida == 4)
	    	    printf("%.2lf kilobytes", valor/=8000);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor/=8000000000);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor*=8000000000000);
	    	break;
	    case 2:
	        printf("%.2lf bytes equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor*=8);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor/=1000000);
	    	if(unidadeSaida == 4)
	    	    printf("%.2lf kilobytes", valor/=1000);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor/=1000000000);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor/=1000000000000);
	    	break;
	    case 3:
	        printf("%.2lf megabytes equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor*=8000000);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor*=1000000);
            if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor);
	    	if(unidadeSaida == 4)
	    	     printf("%.2lf kilobytes", valor*=1000);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor/=1000);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor/=1000000);
	    	break;
	    case 4:
	        printf("%.2lf kilobytes equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor*=8000);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor*=1000);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor/=1000);
	    	if(unidadeSaida == 4)
	    	     printf("%.2lf kilobytes", valor);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor/=1000000);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor/=1000000000);
	    	break;
	    case 5:
	        printf("%.2lf gigabytes equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor*=8000000000);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor*=1000000000);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor*=1000);
	    	if(unidadeSaida == 4)
	    	     printf("%.2lf kilobytes", valor*=1000000);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor/=1000);
	    	break;
	    case 6:
	        printf("%.2lf terabytes equivale a ", valor);
	    	if(unidadeSaida == 1)
	    	    printf("%.2lf bits", valor*=8000000000000);
	    	if(unidadeSaida == 2)
	    	    printf("%.2lf bytes", valor*=1000000000000);
	    	if(unidadeSaida == 3)
	    	    printf("%.2lf megabytes", valor*=1000000);
	    	if(unidadeSaida == 4)
	    	     printf("%.2lf kilobytes", valor*=1000000000);
	    	if(unidadeSaida == 5)
	    	    printf("%.2lf gigabytes", valor*=1000);
	    	if(unidadeSaida == 6)
	    	    printf("%.2lf terabytes", valor);
	    	break;

	    default:
            printf("Unidade de entrada invalida!");
	    	return -1;
	    }
    }while (unidadeEntrada != 0);

	return 0;
}