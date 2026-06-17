#include<stdio.h>  //biblioteca
int main(){ //funcao principal


	float n1, n2 ,ne, m; // inlcui as variaveis no código 
	printf("Insira primeira nota do aluno:\n"); // mostra na tela a mensagem direcionando o usuário
	scanf("%f", &n1);  //escaneando dados
	
	printf("Insira a segunda nota do aluno:\n"); //mensagem para colocar os dados
	scanf("%f", &n2); //lendo dados
	m = (n1+n2)/2; //calculo
	
	if (m >= 6){ //se com condicao
		printf("O aluno passou. Sua media foi de:.%2f", m); //mensagem de exibicao
	}
	else{ //senao
		printf("Insira a nota de exame do aluno:\n"); //mensagem do senao
		scanf("%f", &m); //lendo dados
		m = (ne+n1+n2)/3; //calculos
			
			if (m >= 6){ //se condicao
			printf("O aluno passou. Sua media foi de:.%2f", m); //mensagem do se
			}
			else{ //senao
				printf("O aluno nao passou. Sua media foi de:.%2f", m); //mensagem do senao
			}
	}
	return 0; //fim
}
