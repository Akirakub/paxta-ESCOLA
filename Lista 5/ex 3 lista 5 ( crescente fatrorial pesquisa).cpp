#include<stdio.h>
int main(){
	long long a[15], b[15], i, j, aux, flag=0, num;
		
		for(i=0; i<15; ++i){
			printf("os numeros please:");
			scanf("%i", &a[i]);
			
			b[i]=1;
				for(j=a[i]; j>=1; --j){
					b[i]*=j;
				}
		}
		
			for(i=0; i<14; ++i)
				for(j=i+1; j<15; ++j){
				if(b[i]>b[j]){
					aux=b[i];
					b[i]=b[j];
					b[j]=aux;	
				}
			}
			for(i=0; i<15; ++i){
				printf("%i\n", b[i]);
			}
			
			printf("coloque o numero que voce quer pesquisar");
			scanf("%i", &num);
	
			for(i=0; i<15; ++i){
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
