#include <stdio.h>

/*Receber um intervalo (dois valores) e em seguida um número. Informar se o número está dentro, 
fora ou nas extremidades do intervalo. Por exemplo, em um intervalo de 1 a 3, 0 está fora,
2 está dentro e 1 está em uma extremidade do intervalo.*/

int main ()
{
	int valor1, valor2, num;
	
	printf("Digite o primeiro numero do intervalo: ");
	scanf("%i", &valor1);
	
	printf("Digite o segundo numero intervalo: ");
	scanf("%i", &valor2);
	
	printf("Digite o numero a ser verificado: ");
	scanf("%i", &num);
	
	if (valor1<valor2)
	{
		if(num>valor1 && num<valor2)
		{
			printf("\nO valor %i esta dentro do intervalo",num);
		}
		else 
		{
			if(num>valor1 && num>valor2)   
			{
				printf("\nO valor %i esta fora do intervalo",num);
			}
			else
			{
				printf("\nO valor %i esta em uma extremidade do intervalo",num);
			}
		}
	}
	else
	{
		if (valor1>valor2)
		{
			if(num<valor1 && num>valor2)
			{
				printf("\nO valor %i esta dentro do intervalo",num);
			}
			else 
			{
				if(num>valor1 && num>valor2)
				{
					printf("\nO valor %i esta fora do intervalo",num);
				}
				else
				{
					printf("\nO valor %i esta em uma extremidade do intervalo",num);
				}
			}
		}
		else
		{
			printf("As duas extremidades do intervalo sao iguais");
		}
	}		
	return 0;
}
