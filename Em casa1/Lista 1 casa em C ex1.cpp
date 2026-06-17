#include<stdio.h>
int main(){
	
	float R, D; //declaracao das varieveis real e dolar
	printf("Coloque o valor em reais:\n"); //codigo so pra dar a ordem pra voce colocar o valor 
	scanf("%f" , &R); //comando pra escanear o valor que voce deu 
	D=R*2.40; //calculo da conversao
	printf("A conversao em dolares e: %.2f \n" , D); //mensagem do retorno da conversao junto com o valor convertido
	return 0; //retornando
	
	
	
	
}
