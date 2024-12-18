#include <stdio.h>

//Receber um número e informar se ele é positivo, negativo ou nulo.

int main ()
{
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	if (numero > 0)
	{
		printf("\nPositivo");
	}
	else 
	{
		if (numero < 0)
		{
			printf("\nNegativo");
		}
		else 
		{
			printf("\nNulo");
		}
	}

	return 0;
}
