#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converterDolar();

int main(){
    setlocale(LC_ALL, "");

    converterDolar();







    return 0;
}


void converterDolar(){
    float dolar;
    float real;


    printf ("Quantos dólares você quer converter?\n");
    scanf ("%f", &dolar);

    real = dolar * 4.8;

    printf ("%.1f dólares é igual a %.1f reais\n\n", dolar, real);

    return 0;

}
