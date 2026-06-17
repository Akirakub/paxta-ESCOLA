#include<stdio.h> //biblioteca principal
int main(){ //funcao principal
			int 
			a[5][5], i, j, x; //declaracao de variaveis
			
			for(i=0; i<5; i++) //for para as linhas da matriz
				for(j=0; j<5; j++){ //for para as colunas da matriz
				
					scanf("%i", &a[i][j]); //lendo valores da tabela
				}
				
				for (i=0;i<5;++i){ //for para rodar as colunas
				x=0; //zera o acumulador
				for (j=0;j<5;++j){ //for para rodar as linhas
				x = x + a[j][i]; //soma os valores da coluna
					}
				printf("Coluna %d :%d\n", i, x); //mensagem de exibicao do resultado
				}
				
					for (i=0;i<5;++i){ //for para rodar as linhas
				x=0; //zera o acumulador de novo
				for (j=0;j<5;++j){ //for para rodar as colunas
				x = x + a[i][j]; //soma os valores da linha
					}
				printf("Linha %d :%d\n", i, x); //mensagem de exibicao do resultado
				}
				
	return 0; //fim
}

