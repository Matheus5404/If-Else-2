#include <stdio.h>

//Receber três números e dizer se existe algum número repetido entre eles.

int main()
{
	int num1, num2, num3;
	
	printf("Digite um numero: ");
	scanf("%i", &num1);
	
	printf("Digite outro numero: ");
	scanf("%i", &num2);
	
	printf("Digite mais um numero: ");
	scanf("%i", &num3);
	
	if(num1 == num2 && num2 == num3)
	{
		printf("\nVoce digitou tres numeros iguais");
	}else if (num1 != num2 && num2 != num3 && num1 != num3 ) {
		printf("\nVoce digitou 3 numeros diferentes");
	} else if( num1 == num2 && num2 != num3){
		printf("\nVoce digitou 2 numeros  iguais e 1 diferente");
	} else if ( num1 != num2 && num2 == num3){
		printf("\nVoce digitou 2 numeros  iguais e 1 diferente");
	}
	return 0;
}
