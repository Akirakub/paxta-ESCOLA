#include<stdio.h>
int main(){
	
			float a,b; //declaracao das variaveis
			
			printf("coloque o valor de a:\n"); //leitura da variavel a 
			scanf("%f" , &a); //escaneando ela
			
			printf("coloque o valor de b:\n"); //leitura da b
			scanf("%f" , &b);  // lendo ela
			
			a=a+b; //calculos
			b=a-b;
			a=a-b;
			
			printf("aqui estao os valores trocados: %f %f", a ,b); //exibindo as variaveis ja calculadas
			
			return 0; //retornando  
		 
	
	
	
	
	
	
}
