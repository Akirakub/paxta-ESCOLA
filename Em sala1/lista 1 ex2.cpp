#include<stdio.h>

int main()
{
		
		float C, F;
		printf("Entre com a temperatura em Fahrenheit: ");
		scanf("%f" , &F);
		C=(((F-32)*5)/9);
		printf("A temperatura em celsius e: %.2f", C);
		return 0;
	
	
	
}
