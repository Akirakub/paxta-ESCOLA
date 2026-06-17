#include<stdio.h>
int main(){
	
		float s,t; //declarando as variaveis
		
		printf("coloque o valor do tempo em segundos:\n"); //mensagem para o escaneamento da variavel
		scanf("%f" , &t); //escaneando a variavel
		
		s=2+3*t+(10*t*t)/2; //calculo
		
		printf("o valor da distancia em metros e: %.2f", s); //retornando o calculo
		
		return 0;
	
	
	
	
}
