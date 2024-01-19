#include <stdio.h>
#include <math.h>

float a;
float b;
float r;

float ObliczPoleProstokata(float a, float b) {
	return(a*b);
}
float ObliczPoleKola(float r) {
	return(M_PI*r*r);
}
void PoleProstokata(){
    printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);
	printf ("\n wynik:\t%f\n", ObliczPoleProstokata(a, b));
}
void PoleKola(){
    printf("Podaj wartosc r:\t");
    scanf("%f", &r);
    printf("\n wynik:\t%f\n", ObliczPoleKola(r));
}
int main(){
    PoleProstokata();
    PoleKola();
}
