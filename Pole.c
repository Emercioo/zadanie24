#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;
float r = 0;

float obliczeniePolaProstokata(float a, float b){
    return (a*b);
}

float obliczeniePolaKola(float r){
    return(M_PI*pow(r, 2));
}
int main() {
	printf("Podaj pierwszy bok prostokata:\t");
    scanf("%f", &a);
    printf("Podaj drugi bok prostokata:\t");
    scanf("%f", &b);
    printf("Pole prostokata wynosi:\t%f", obliczeniePolaProstokata(a, b));

    printf("\nPodaj promien kola:\t");
    scanf("%f", &r);
    printf("Pole kola wynosi: \t%f", obliczeniePolaKola(r));
    return 0;
}
