#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {
	setlocale(LC_ALL,"Russian");
		
	float R,B,S1,S2,p;
	
	p = 3.14;
	
	printf("Введите радиус R");
    scanf("%f",&R);
    
    printf("Введите сторону квадрата B");
    scanf("%f",&B);
    
    S1 = p*pow(R,2);
    S2 = pow(B,2);


    if (S1 > S2 ) printf("Можно вписать");
else  printf("Нельзя вписать");
}

