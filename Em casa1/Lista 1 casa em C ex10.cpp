#include<stdio.h>
int main(){
	
				float a, b,c; // declaracao de variaveis
				
				printf("coloque valor de a:\n"); //mensagem pra inscercao das variaveis
				scanf("%f" , &a); //escaneando a
				 
				printf("coloque o valor de b:\n"); //mensagem para pegar a varieavel
				scanf("%f" , &b); //escaneando variaveis
				
				
				c=a; //calculos
				a=b;
				b=c;
				
				printf("os valores trocados sao: %.2f %.2f", a ,b); //retorno do resultado trocados
				
				return 0; //retornando 
	
	
	
	
	
}
