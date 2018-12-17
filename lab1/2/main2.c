#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void) {
	
	float x,y,z,a,b,u,r;
		
	printf("Write x",x);
	scanf("%g",&x);
	
	printf("Write y",y);
	scanf("%g",&y);
	
	printf("Write z",z);
	scanf("%g",&z);
	

    a = 9+(pow(x-y,2));
    b = (pow(a,1.0/3.0))/(pow(x,2)+ pow(y,2) + 2);
   
    u = (exp(fabs(x-y)))*(pow(tan(z),3));
    
	r = b-u;
    
	printf("%g read ",r); 
}
