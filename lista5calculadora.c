# include <stdio.h>

/*Implementar uma calculadora onde o usu�rio digita dois n�meros e uma op��o, 
que deve ser 1 para adi��o, 2 para subtra��o, 3 para multiplica��o e 4 para divis�o. 
Informar na tela caso seja informada uma op��o inv�lida.*/

int main ()
{
	int num1, num2, opcao, resultado;
	
	
	printf("Calculadora do Matheus : 1 para adicao   2 para subtracao   3 para multiplicacao   4 para divisao.\n");
	printf("\nDigite um numero: ");
	scanf("%i", &num1);
	printf("\nDigite outro numero: ");
	scanf("%i", &num2);
	printf("\nDigite a opcao da operacao a ser feita: ");
	scanf("%i", &opcao);
	
	if(opcao == 1)
	{
		resultado = num1 + num2;
		printf("\nA soma dos numeros sera: %i", resultado);
	}
	else if(opcao == 2)
	{
		resultado = num1 - num2;
		printf("\nA subtracao dos numeros sera: %i", resultado);
	}
	else if(opcao == 3)
	{
		resultado = num1 * num2;
		printf("\nA multiplicacao dos numeros sera: %i", resultado);
	}
	else if(opcao == 4)
	{
		resultado = num1 / num2;
		printf("\nA divisao dos numeros sera: %i", resultado);
	}
	else 
	{
		printf("\nOperacao invalida");
	}
	return 0;
}
