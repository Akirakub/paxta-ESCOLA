#include <stdio.h> //Incluir a biblioteca principal
int main() {
	int numeromes; //declarando variavel
	
	printf("Digite o numero do mes: "); //mensagem de dado
	scanf("%i", &numeromes); //Ler o número colocado
	
	printf("\nO mes desse numero e: "); //Exibir para o usuário que o mês do numero é:
	
	switch (numeromes) { //Caso seja:
		case 1: //Caso o número seja 1
		printf("Janeiro\n"); //Exibir o mês de Janeiro 
		break; //Fim do caso 1
		
		case 2: //Caso o número seja 2
		printf("Fevereiro\n"); //Exibir o mês de Fevereiro
		break; //Fim do caso 2
		
		case 3: //Caso o número seja 3
		printf("Marco\n"); //Exibir o mês de Março
		break; //Fim do caso 3
		
		case 4: //Caso o número seja 4
		printf("Abril\n"); //Exibir o mês de Abril
		break; //Fim do caso 4
		
		case 5: //Caso o número seja 5
		printf("Maio\n"); //Exibir o mês de Maio
		break; //Fim do caso 5
		
		case 6: //Caso o número seja 6
		printf("Junho\n"); //Exibir o mês de Junho
		break; //Fim do caso 6
		
		case 7: //Caso o número seja 7
		printf("Julho\n"); //Exibir o mês de Julho
		break; //Fim do caso 7
		
		case 8: //Caso o número seja 8
		printf("Agosto\n"); //Exibir o mês de Agosto
		break; //Fim do caso 8
		
		case 9: //Caso o número seja 9
		printf("Setembro\n"); //Exibir o mês de Setembro
		break; //Fim do caso 9
	
		case 10: //Caso o número seja 10
		printf("Outubro\n"); //Exibir o mês de Outubro
		break; //Fim do caso 10
		
		case 11: //Caso o número seja 11
		printf("Novembro\n"); //Exibir o mês de Novembro
		break; //Fim do caso 11
		
		case 12: //Caso o número seja 12
		printf("Dezembro\n"); //Exibir o mês de Dezembro
		break; //Fim do caso 12
		
		default: //o padrao caso nao coloque o numero necessario
		printf("Mes invalido! O numero deve ser de 1 a 12.\n"); //Exibir que o número do mês é inválido
	
	}
	return 0; //Finalizar o código
}

