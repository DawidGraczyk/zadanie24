#include <stdio.h>

float a;
float b;
float obliczPoleProstokata(float a, float b) {
	return(a*b);
}
int main(){
    printf("Podaj wartosc a:\t ");
	scanf("%f", &a);
	printf("Podaj wartosc b:\t");
	scanf("%f", &b);
	printf ("\n wynik:\t%f\n", obliczPoleProstokata(a, b));
	return(0);
}
