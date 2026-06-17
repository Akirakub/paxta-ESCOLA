#include<stdio.h>
int main(){
		int a[8], b[8], i, j, aux, flag=0, num;
		
		for(i=0; i<8; ++i){
			printf("coloque os numeros minino:");
			scanf("%i", &a[i]);
			b[i]= a[i]*5;
		}
		
		for(i=0; i<7; ++i)
			for(j=i+1; j<8; ++j){
				if(b[i]>b[j]){
					aux=b[i];
					b[i]=b[j];
					b[j]=aux;	
				}
			}
			for(i=0; i<8; ++i){
				printf("%i\n", b[i]);
			}
			
			printf("coloque o numero que voce quer pesquisar");
			scanf("%i", &num);
	
			for(i=0; i<8; ++i){
				if(b[i]==num){
					flag=1;
					printf("o numero foi encontrado no indice %i", i);
					break;
				}
	
			}
				if(!flag){
					printf("Numero nao encontrado");
				}
			
	return 0;
}
