# include <stdio.h>

/*Através do sexo (1 para masculino, 2 para feminino) e da altura, calcular o peso ideal de uma pessoa. 
Receber também o peso atual dela e indicar se a mesma está no peso ideal, acima ou abaixo, conforme o cálculo:

- Fórmula do peso ideal do homem: (72.7 * altura) – 62
- Fórmula do peso ideal da mulher: (62.1 * altura) – 48.7

Atenção! Considerar uma margem de erro de -+ 5% para considerar uma pessoa dentro do peso ideal.*/

int main()
{
	float peso, altura, opcao, calculoh, calculom;
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite a opcao: ");
	scanf("%f", &opcao);
	
	calculoh = peso * altura * 0.01 - 62;
	calculom = peso * altura * 0.01 - 48.7;
	
	if(opcao == 1)
		if(calculoh >= 68 && calculoh < 90 || calculoh >= 68 && calculoh < 68.5 || calculoh >= 89.5 && calculoh < 90)
		{
			printf("\nPeso Ideal: %.2f", calculoh);
		}
	else
	{
		if(calculoh >= 90)
		{
			printf("\nAcima do Peso: %.2f", calculoh);
		}
		else
		{
			printf("\nAbaixo do peso: %.2f", calculoh);
		}	
	}
	
	if(opcao == 2)
		if(calculom > 52 && calculom < 70 || calculom >= 52 && calculom < 52.5 || calculom >= 69.5 && calculom < 70)
		{
			printf("\nPeso Ideal: %.2f", calculom);
		}
	else
	{
		if(calculom >= 70)
		{
			printf("\nAcima do Peso: %.2f", calculom);
		}
		else
		{
			printf("\nAbaixo do peso: %.2f", calculom);
		}	
	}
		
	
	return 0;
}
