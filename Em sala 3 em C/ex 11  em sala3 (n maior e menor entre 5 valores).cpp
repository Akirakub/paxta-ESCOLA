#include<stdio.h> //biblioteca
int main(){ //funcao principal
				int nmaior ,nmenor ,nums; //declaracao de variaveis
				
				for(int i=0; i<5; ++i){ //for com inicio, condicao e incremento
					scanf("%i", &nums); //leitura do numero digitado
					if(i==0){ //condicao para o primeiro numero lido
						nmaior=nums; //define o primeiro como maior
						nmenor=nums; //define o primeiro como menor também
					}
					else{ //para os proximos numeros
						if(nums>nmaior){ //condicao se o atual for maior
							nmaior=nums; //atualiza o maior
						}
						else if(nums<nmenor){ //condicao se o atual for menor
							nmenor=nums; //atualiza o menor
						}
					}
					
				}
				printf("maior:%i menor:%i\n", nmaior, nmenor); //exibicao de resultados finais

	return 0; //retorno
}

