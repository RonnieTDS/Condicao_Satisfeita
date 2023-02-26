#include<stdio.h>
#include<stdlib.h>


int main(){
	
		
	int n1,n2,n3;
		
		printf("Insira o primeiro numero:\n");
		scanf("%d",&n1);
		
		printf("Insira o segundo numero:\n");
		scanf("%d",&n2);
		
		printf("Insira o terceiro numero:\n");
		scanf("%d",&n3);
		
		
		if((n1>n2) && (n1>n3)){
		
		printf("Condicao Satisfeita! \n");
		
		}else{
			printf("Erro! \n");
			
		}

	
	
	return 0;
}

