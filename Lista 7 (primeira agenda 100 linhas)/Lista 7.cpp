#include<stdio.h> // inclui a biblioteca de entrada e saida padrao
#include<stdlib.h> // inclui a biblioteca de utilidades do sistema
#include<string.h> // inclui a biblioteca de manipulacao de strings
int main() { // funcao principal
	struct agenda { // define a estrutura de dados da agenda
		char nome[100], end[120], tel[12]; // campos de texto
		int id; // campo de idade
		}; // fim da estrutura
	struct agenda x[5]; // cria um array de 5 registros
	int cod, i, j, flag=0, pesq, e=1; // declara variaveis de controle
	char alt[100], aux[100]; // declara strings auxiliares
	int ch, m, k; // declara variaveis inteiras de apoio

	while (e !=0) { // laco principal do menu
		printf("\t\t------------------------------\n \t\t\t Menu da Agenda\n \t\t------------------------------"); // exibe o menu
		printf("\n\t 1.Cadastro\n \t 2.pesquisa de idade\n \t 3.Classificacao por Ordem Alfabetica\n \t 4.alteracao de erros\n \t 5.sair"); // mostra opcoes
		printf("\n"); // pula linha
		scanf("%i", &cod); // le a escolha do usuario
		while((ch= getchar()) != '\n' && ch != EOF); // limpa o buffer do teclado
		system("cls"); // limpa a tela do console
		switch(cod) { // verifica a opcao escolhida
			case 1: // caso de cadastro
				for(i=0; i<5; ++i) { // laco para 5 cadastros
					printf("Cadastro e Registros\n"); // cabecalho
					printf("%io do Nome:", i+1); // pede nome
					fgets(x[i].nome, 100, stdin); // le o nome
					x[i].nome[strcspn(x[i].nome, "\n")] = '\0'; // remove a quebra de linha
					printf("Endereco:"); // pede endereco
					fgets(x[i].end, 120, stdin); // le endereco
					x[i].end[strcspn(x[i].end, "\n")] = '\0'; // remove a quebra de linha
					printf("Telefone:"); // pede telefone
					fgets(x[i].tel, 12, stdin); // le telefone
					x[i].tel[strcspn(x[i].tel, "\n")] = '\0'; // remove a quebra de linha
					printf("Idade:"); // pede idade
					scanf("%i", &x[i].id); // le a idade
					while((ch = getchar()) != '\n' && ch != EOF); // limpa o buffer
					system("cls"); // limpa a tela
				} // fim do laco
				break; // finaliza o caso 1
			case 2: // caso de pesquisa
				printf("Digite a idade do cadastro:"); // pede a idade
				scanf("%i", &pesq); // le a idade alvo
				while((ch = getchar()) != '\n' && ch !=EOF); // limpa o buffer
				for(i=0; i<5; ++i) { // percorre os registros
					if(pesq == x[i].id) { // verifica se a idade coincide
						flag=1; // marca que encontrou
						break; // sai do laco
					} // fim do if
				} // fim do laco
				system("cls"); // limpa a tela
				if(flag) { // verifica se achou
					printf("a idade %i foi encontrada na posicao  %i \n", pesq, i+1 ); // exibe sucesso
				} else { // caso nao ache
					printf("A idade nao foi encontrada\n"); // exibe erro
				} // fim do if/else
				break; // finaliza o caso 2

			case 3: // caso de ordenacao
				for(i=0; i<4; ++i) // laco externo de comparacao
					for(j=i+1; j<5; ++j) { // laco interno
						if(strcmp(x[i].nome, x[j].nome )>0) { // compara nomes
							strcpy(aux,x[i].nome); // guarda nome atual
							strcpy(x[i].nome,x[j].nome); // troca nomes
							strcpy(x[j].nome, aux); // finaliza a troca
						} // fim do if
					} // fim do for j
				for(i=0; i<5; ++i) { // laco de exibicao
					printf("%s\n", x[i].nome); // imprime nomes ordenados
				} // fim do for i
				break; // finaliza o caso 3
			case 4: // caso de alteracao
				printf("Escolha uma das pessoas\n"); // pede escolha
				for(i=0; i<5; ++i) { // lista pessoas
					printf("pessoa %i: %s\n", i+1, x[i].nome); // exibe nomes
				} // fim do for
				scanf("%i", &m); // le indice
				while((ch=getchar()) != '\n' && ch != EOF); // limpa buffer
				if(m>5 || m<1) { // valida o indice
					printf("Cadastro invalido tente novamente!"); // exibe erro
				} else { // se valido
					printf("1-%s\n", x[m-1].nome); // mostra nome
					printf("2-%s\n", x[m-1].end); // mostra endereco
					printf("3-%s\n", x[m-1].tel); // mostra telefone
					printf("4-%i\n", x[m-1].id); // mostra idade
					printf("5-sair\n"); // opcao sair
					printf("o que voce deseja mudar?\n"); // pergunta o que mudar
					scanf("%i", &k); // le a opcao
					system("cls"); // limpa tela
					while((ch=getchar()) != '\n' && ch != EOF); // limpa buffer
					switch(k) { // entra no submenu de edicao
						case 1: // edita nome
							printf("coloque seu novo nome:\n");
							fgets(x[m-1].nome, 100, stdin);
							x[m-1].nome[strcspn(x[m-1].nome, "\n")] ='\0';
							break;//quebra
						case 2: // edita endereco
							printf("coloque seu novo endereco:\n");
							fgets(x[m-1].end, 120, stdin);
							x[m-1].end[strcspn(x[m-1].end, "\n")]= '\0';
							break;//quebra
						case 3: // edita telefone
							printf("coloque seu novo numero de telefone\n");
							fgets(x[m-1].tel, 12, stdin);
							x[m-1].tel[strcspn(x[m-1].tel, "\n")]='\0';
							break;//quebra
						case 4: // edita idade
							printf("coloque sua nova idade:\n");
							scanf("%i", &x[m-1].id); // le nova idade
							while((ch=getchar()) != '\n' && ch != EOF);
							break;//quebra
						case 5: // sair edicao
							break;//quebra
						default: // opcao invalida
							printf("valor invalido tente novamente!\n");
							break; //quebra
					} // fim do switch k
					break; // sai do caso 4
				} // fim do else
			case 5: // caso sair
				system("cls"); // limpa tela
				printf("Adeus"); // imprime despedida
				e=0; // encerra o laco
				break; // finaliza o caso 5
			default: // opcao invalida
				printf("valor sem peso, tente novamente!"); // exibe aviso
				break; // finaliza o default
		} // fim do switch cod
	} // fim do while
	return 0; // retorna 0 ao sistema
} // fim da main
