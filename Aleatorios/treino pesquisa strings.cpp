#include<stdio.h>
#include<string.h>
int main(){
				char nomes[5][100], aux[100], pesq[100];
				int flag=0;
			
				for(int i=0; i<5; ++i){
				printf("coloque os nomes:");
				fgets(nomes[i],100,stdin);
				nomes[i][strcspn (nomes[i], "\n")]='\0';
			}
			
				for(int i=0; i<5; i++){
					printf("%s\n", nomes[i]);
				}
				printf("coloque oq ce quer pesquisar:");		
				fgets(pesq,100,stdin);
				pesq[strcspn(pesq,"\n")]= '\0'
				
				for(int i=0; i<5; i++){
				if(strcmp(nomes[i], pesq)==0){
					flag=1;
					printf("Seu nome esta na posicao %d", i);
					break;
				}
			}
			
			if(flag==0){
				printf("Seu nome nao existe nesse cadastro");
				
		
			}	
			
	
	
	return 0;
}
