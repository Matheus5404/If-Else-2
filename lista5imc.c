#include <stdio.h>

/*Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da fórmula 
IMC = Peso (kg) / Altura2 (m). Informe a classificação do IMC na tela de acordo com a tabela:*/

IMC < 18.5: Abaixo do peso
18.5 <= IMC < 25.0: Peso Ideal
25.0 <= IMC < 30.0: Sobrepeso
30.0 <= IMC < 35.0: Obesidade Grau I
35.0 <= IMC < 40.0: Obesidade Grau II
IMC >= 40.0: Obesidade Grau III

int main ()
{
	int imc;
	
	printf("Digite o seu IMC: ");
	scanf("%i", &imc);
	
	if(imc < 18.5)
	{
		printf("\nO numero %i esta abaixo do seu peso", imc);
	}
	else
	{
		if(imc >= 18.5 && imc < 25 )
		{
			printf("\nO numero %i esta no peso ideal", imc);
		}
		else
		{
			if(imc >= 25 && imc < 30)
			{
				printf("\nO numero %i indica que voce esta em Sobrepeso", imc);
			}
			else
			{
				if(imc >= 30 && imc < 35)
				{
					printf("\nO numero %i indica que voce esta em Obesidade Grau 1", imc);
				}
				else
				{
					if(imc >= 35 && imc < 40)
					{
						printf("\nO numero %i indica que voce esta em Obesidade Grau 2", imc);
					}
					else
					{
						if(imc >= 40)
						{
							printf("\nO numero %i indica que voce esta em Obesidade Grau 3", imc);
						}
					}
				}
			}
		}
	}

	return 0;
}
