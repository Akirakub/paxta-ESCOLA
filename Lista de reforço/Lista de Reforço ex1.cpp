#include<stdio.h> //biblioteca principal
#include<stdlib.h> //biblioteca para gerenciar comportamento
int main(){
		int a[20], b[10], i, j; //variaveis
					
						for(i=0; i<10; ++i){ //for para zerar a contagem dos num
							b[i]=0; //colocar valor zero pro vetor de contagem
							}
					for(i=0; i<20; i++){ //for para colocar os valores 
						
						do{ //faca
						printf("coloque os numeros:"); //mensagem de exibicao
						scanf("%i", &a[i]); //escaneando valores
						
						if(a[i]>9|| a[i]< 0 ){ //se a condicao for essa
							system("cls"); //limpa tudo
							printf("numero invalido, tente novamente!!!\n"); //esta errado
																		} 
						}while(a[i]>9 || a[i]<0); //so roda o cod enquanto errado
		    			}		
			
						for(i=0; i<20; ++i){ //for para atribuir valores a contagem da outra matriz
							j = a[i]; //o indice de um vai pro outro
							b[j]++;  //soma um a mais na contagem
						}
			
					for(i=0; i<10; ++i){ //for para exibir resultado
					printf("O numero %i aparece %i\n", i, b[i]); //mensagem de exibicao
																}					
	
	
	return 0; //fim
}
