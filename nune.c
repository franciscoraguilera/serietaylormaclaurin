#include<stdio.h>
float factorial(float n);
float funcionserie(float x, float n);
float potencia(float x, float i);

float factorial(float n) {
	float fact;
	float p;
	fact = 1;
	for (p=1;p<=n;p+=1) {
		fact = fact*p;
	}
	return fact;
}

float funcionserie(float x, float n) {
	float i;
	float serie;
	serie = 0;
	serie = 1+potencia(x,1)/factorial(1);
	for (i=1;i<=n;i+=1) {
		serie = serie+(potencia(x,i)/factorial(i+1));
	}
	return serie;
}

float potencia(float x, float i) {
	float poten;
	if (i==0) {
		poten = 1;
	} else {
		poten = x*potencia(x,i-1);
	}
	return poten;
}

int main() {
	float n;
	int serie;
	float x;
	printf("Introduzca n\n");
	scanf("%f",&n);
	printf("Introduzca x\n");
	scanf("%f",&x);
	printf("%f\n",funcionserie(x,n));
	return 0;
}


