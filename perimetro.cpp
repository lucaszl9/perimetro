#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"");
    double raio, area, perimetro;
    
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = M_PI * pow(raio, 2);
    perimetro = 2 * M_PI * raio;

    printf("A area do circulo é: %.2lf\n", area);
    printf("O perimetro do circulo é: %.2lf\n", perimetro);

    return (0);
}

