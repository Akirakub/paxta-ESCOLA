#include<stdio.h> //biblioteca para comandos de entrada e saida
int main(){ //funcao principal
			int a[5], i, j, aux, flag=0, num; //declaracao de variaveis
		
		for(i=0; i<5; ++i){ //for para ler os numeros
			printf("coloque os numeros"); //mensagem pedindo os numeros
			scanf("%i", &a[i]); //lendo o numero pro vetor
		}
			for(i=0; i<4; ++i) //primeiro indice
				for(j=i+1; j<5; j++){ //segundo indice
					if(a[i]>a[j]){ //se primeiro indice for maior que o segundo
						aux=a[i]; //troca com auxiliar
						a[i]=a[j]; //passa do j pro i
						a[j]=aux; //do aux pro j		
					}
				}
				
			for(i=0; i<5; ++i){ //for para rodar o vetor ordenado
				printf("%i ", a[i]); //exibindo os numeros na tela
			}	
			
			printf("coloque o numero que voce quer pesquisar:"); //mensagem para saber oq vc quer pesquisar
			scanf("%i", &num); //lendo o num q vc quer pesquisar
			
				for(i=0; i<5; ++i){ //for
				if(a[i]==num){ //se for igual ao numq vc procura
					flag=1; //verdadeiro
					printf("o numero foi encontrado no indice %i", i+1); //mensagem de retorno
					break; //quebra
				}
	
			} 
				if(!flag){ //se a flag ainda nao ficar diferente de zero 
					printf("Numero nao encontrado"); //n encontrou
				}
			
	return 0; //fim 
}

