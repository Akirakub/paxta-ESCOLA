#include<stdio.h>
int main(){
		int a[5], b[5], c[5], i, j, aux;
		
		for(i=0; i<5; i++){ //for para ler 
			printf("coloque os valores do A:"); //mensagem de para escanear
			scanf("%i", &a[i]); //scan
		}
		for(i=0; i<4; i++) //for para primeiro indice
			for(j=i+1; j<5; ++j){ //for para segundo indice
				if(a[i]>a[j]){ //if para verificar se e maior que o primeiro
					aux=a[i];  //bubble sort
					a[i]=a[j]; //bubble sort
					a[j]=aux; //bubble sort
				}
			}
			
			for(i=0; i<5; i++){ //for para ler 
			printf("coloque os valores do B:"); //mensagem de para escanear
			scanf("%i", &b[i]); //scan
		}
		for(i=0; i<4; i++) //for para primeiro indice
			for(j=i+1; j<5; ++j){ //for para segundo indice
				if(b[i]>b[j]){ //if para verificar se e maior que o primeiro
					aux=b[i];  //bubble sort
					b[i]=b[j]; //bubble sort
					b[j]=aux; //bubble sort
				}
			}
			
			
			c[i]=a[i]+b[i];
	
			for(i=0; i<5; ++i){
				printf("%i ", c[i]);
			}
		
	
	
	return 0;
}
