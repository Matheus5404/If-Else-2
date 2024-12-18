#include <stdio.h>

// Receber três números e mostrar qual é o maior deles.

int main()
{

	int num1, num2, num3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	
	printf("Digite o terceiro numero: ");
	scanf("%i", &num3);
	
	if(num3 > num2 && num3 > num1 || num1 > num2 && num1 > num3 || num2 > num1 && num2 > num3)
	{
		printf("\nO numero maior sera: %i");
	}
	
}
