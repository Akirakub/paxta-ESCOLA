#include<stdio.h>
int main()
{
	int A, B, C;
	printf("Entre com o valor A:");
	scanf("%i" , &A);
	printf("Entre com o valor de B:");
	scanf("%i" , &B);
	C=A;
	A=B;
	B=C;
	printf("Os valores trocados sao: %i %i", A, B);
	return 0;	
	
	
	
	
}
