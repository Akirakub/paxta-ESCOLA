#include<stdio.h>
int main(){ //funcao principal
			
		float n; //declaracao de variaveis
		int nf;//declaracao de variaveis inteiras
	
	
		
				printf("\n coloque a sua nota:\n"); //mensagem para colocar os dados
				scanf("%f" , &n); //escaneando nota
			
		 		int   ni = n; // declaracao de inteiro para separar a nota da fracao
		    	float	f = n-ni; //calculo para pegar so a parte fracionaria do num
				
				if (f>=0.5){ //se com a sua condicao
					nf=ni+1; //calculo de arredondamento
				}
				else //senao 
				{
					nf=ni;//calculo para arredondamento para baixo
		    	}
					
				printf("a sua nota arrendondada e: %i" ,nf); // retorno da nota arredondada
	
	return 0; //finalizado
}
