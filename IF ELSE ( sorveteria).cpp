#include <stdio.h>


	int main() {
		int n;	
		
		printf("Ola, bem vindo ao autoatendimento da sorveteria C, aqui estao as opcoes de sabores:\n");
		printf("Digite (1) para chocolate\nDigite (2) para baunilha\nDigite (3) para ovomaltine\n");
		printf ("\nInforme o sabor desejado:\n");
		scanf ("%i", &n);
		
		switch(n) {
			
		case 1:
			printf("Sorvete sabor chocolate");
			break;
			
		case 2:
			printf("Sorvete sabor baunilha");
			break;
			
		case 3:
			printf("Sorvete sabor ovomaltine");
			break;
			
		default:
			printf ("Invalido");
			
			
		}
		
		return 0;
	}
