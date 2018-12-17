#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(void) {
	setlocale(LC_ALL,"Russian");
	
	int  i,a,b,c,n;
	
	for (n=11;n<=31; n++){

		if(n%2!=0) {
		
			i =pow(n,2);
			a =(i/100);
			b = ((i%100)/10);
			c= ((i%100)%10);
	
			if((a<b) && (b<c)) printf("Числа:%d\n",i);
		}
	}
	
}
