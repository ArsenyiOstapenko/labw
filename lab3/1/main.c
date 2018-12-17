#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main(void) {
    setlocale(LC_ALL,"Ressian");
    
   float S,R,i,p;
    
    printf("read: ",S);
    scanf("%g",&S);
    
	R=S*2;
    i=1;
   
   while (S<=R){
	S=S+S*0.03;
	i++;
	}
	printf("read: %g",i);
}
