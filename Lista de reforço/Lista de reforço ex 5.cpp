#include<stdio.h> //biblioteca principal
#include<string.h> //biblioteca para mexer com textos
int main() { //funcao principal
	char frase[200], palavra[200], maiorpalavra[200]; //declaracao de vetores de texto
	int i, tamanho=0, tamanhomaior=0; //declaracao de variaveis de contagem


	printf("coloque sua frase: \n"); //mensagem pedindo a frase
	fgets(frase, 200, stdin); //lendo a frase digitada
	frase[strcspn(frase, "\n")] ='\0'; //retira o enter do fim da frase

	for(i=0; i<=strlen(frase); ++i) { //for roda ate o tamanho real da frase
		if(frase[i]!='\0') { //se nao for o fim da frase
			if(frase[i] !=' ') { //se nao for um espaco em branco
				palavra[tamanho] = frase[i]; //guarda a letra no vetor palavra
				tamanho++; //aumenta o tamanho da palavra atual
			} else { //se achar um espaco
				if(tamanho>tamanhomaior) { //se a palavra atual for maior que a maior de antes
					strcpy(maiorpalavra, palavra); //copia a palavra atual para a maior
					tamanhomaior=tamanho; //atualiza o tamanho da maior palavra
				}
				palavra[tamanho]='\0'; //finaliza o texto da palavra atual
				tamanho=0; //zera o contador para a proxima palavra
			}
		} 
	}
	printf("sua maior palavra %s tem %i", maiorpalavra, tamanhomaior); //mensagem exibindo o resultado final


	return 0; //fim
}

