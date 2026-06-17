#include<stdio.h> //Incluir a biblioteca
int main(){ // funcao pincipal
	float v1, v2, v3, m;// declaracao de variaveis
			printf("Inserir primeira nota do aluno:\n"); //mensagem de dados
			scanf("%f", &v1); //ler dados
	
			printf("Inserir segunda nota do aluno:\n"); // mensagem de dados
			scanf("%f", &v2); // ler dados
			printf("Inserir terceira  nota do aluno:\n"); // mensagem para coloar dados
		
			scanf("%f", &v3); //ler dados
			
			m = (v1 + v2 + v3)/3; // calculo
		
			if (m >= 6){ // se com condicao
			printf("O aluno passou. Sua media foi de:.%2f", m); // mensagem do se
			}
			else { //senao
			printf("O aluno nao passou. Sua media foi de:.%2f", m); //mensagem do senao
	}
	return 0; //fim
}
