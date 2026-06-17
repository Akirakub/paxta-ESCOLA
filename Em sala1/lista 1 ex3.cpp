#include<stdio.h>
int main(){
	
	float V, R, A;
	printf("Entre com o Raio:");
	scanf("%f" , &R);
	printf("entre com a altura:");
	scanf("%f" , &A);
	V=3.14159*R*R*A;
	printf("O valor do volume e: %.2f", V );
	return 0;
	
	
	
	
}
