#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {
	setlocale(LC_ALL,"Russian");
		
	float R,B,S1,S2,p;
	
	p = 3.14;
	
	printf("������� ������ R");
    scanf("%f",&R);
    
    printf("������� ������� �������� B");
    scanf("%f",&B);
    
    S1 = p*pow(R,2);
    S2 = pow(B,2);


    if (S1 > S2 ) printf("����� �������");
else  printf("������ �������");
}

