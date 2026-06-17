#include<stdio.h>
int main(){ //funcao principal
				
			int nc=50 , nd, r;  // declaracao das variaveis
			
				printf("coloque o numero desejado ate 50:"); // mensagem para usuario colocar os dados
						scanf("%i" , &nd); //leitura de dados
				
					if  (nd<=50) { // se e a sua condicao 
						 r=nc-nd; //calculo
						 printf("seu numero e: %i ");  // mensagem de retorno do se
				   	}
					
					else { //senao 
						printf("numero invalido ou nao suportado"); //condicao do senao e mensagem de retorno
					}
	
	
	return 0; //retornando 
}
