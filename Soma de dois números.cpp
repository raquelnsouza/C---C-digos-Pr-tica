#include <stdio.h>
#include <locale.h>

	int main () { setlocale(LC_ALL,"");
	
	int a, b, soma;
	

	
	printf("---- Vamos fazer a soma de 2 n�meros! ---- \n");
	printf("-- Digite um n�mero: -- \n");
	scanf("%d", &a);
	printf("-- Digite outro n�mero: -- \n");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("A soma dos n�meros � igual a %d", soma);
	
	
	return 0;
	
		
		
	}
