#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;
float r = 0;
int wybor = 0;

void obliczeniePolaProstokata(){
    printf("Podaj pierwszy bok prostokata:\t");
    scanf("%f", &a);
    printf("Podaj drugi bok prostokata:\t");
    scanf("%f", &b);
    printf("Pole prostokata wynosi:\t%f\n", (a*b));
}

void obliczeniePolaKola(){
    printf("Podaj promien kola:\t");
    scanf("%f", &r);
    printf("Pole kola wynosi: \t%f", M_PI*pow(r, 2));
}

int main() {

	printf("Wybierz co chcesz obliczyc!\n");
	printf("1 - Pole prostokata!\n");
	printf("2 - Pole kola!\n");
	printf("3 - Wyjscie!\n\n");
	scanf("%d", &wybor);
	switch(wybor){
        case 1:
            obliczeniePolaProstokata();
            break;
        case 2:
            obliczeniePolaKola();
            break;
        case 3:
            return 0;
        default:
            printf("\nZla komenda!");
	}
    return 0;
}
