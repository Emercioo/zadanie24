#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;

float obliczeniePolaProstokata(float a, float b){
    return (a*b);
}
int main() {
	printf("Podaj pierwszy bok prostokata:\t");
    scanf("%f", &a);
    printf("Podaj drugi bok prostokata:\t");
    scanf("%f", &b);
    printf("Pole prostokata wynosi:\t%f", obliczeniePolaProstokata(a, b));
    return 0;
}
