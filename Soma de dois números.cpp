#include <stdio.h>
#include <locale.h>

	int main () { setlocale(LC_ALL,"");
	
	int a, b, soma;
	

	
	printf("---- Vamos fazer a soma de 2 números! ---- \n");
	printf("-- Digite um número: -- \n");
	scanf("%d", &a);
	printf("-- Digite outro número: -- \n");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("A soma dos números é igual a %d", soma);
	
	
	return 0;
	
		
		
	}
