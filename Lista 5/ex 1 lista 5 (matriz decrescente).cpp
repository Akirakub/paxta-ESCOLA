#include<stdio.h> //inclui bilbioteca principal
int main(){ //funcao principal
			int a[12], i, j, aux; //declaracao das variaveis 
			
			for(i=0;i<12;++i){ //for para ler os numeros
				printf("coloque os valores :"); //mensagem de exibicao para pegar as variaveis
				scanf("%i", &a[i]); //lendo variaveis
			}
			
			for(i=0; i<11; ++i)//for par trocar os indices para verificacao 
				for(j=i+1; j<12; ++j){ //indice a ser comparado
					if(a[i]<a[j]){ //condicao para trocar decrescente
						aux=a[i]; //bubble sort
						a[i]=a[j];//bubble sort
						a[j]=aux; //bubble sort
					}
				}
			for(i=0; i<12; ++i){ //for para exibir resultados
				printf("%i \n", a[i]);//exibicao
			}
	
	
	return 0; //fim 
}
