#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main() {

     
    float a,b,c;
	

printf("Enter a");
scanf("%f", &a);

printf("Enter b");
scanf("%f", &b);

printf("Enter c");
scanf("%f", &c);

if (a>0 && b>0 && c>0) printf("3");
  else if (a<0 && b>0 && c>0) printf("2");
  else if (a<0 && b<0 && c>0) printf("1");
  else if (a<0 && b<0 && c<0) printf("0");
  else if (a>0 && b>0 && c<0) printf("2");
  else if (a>0 && b<0 && c<0) printf("1");
  else if (a<0 && b>0 && c<0) printf("1");
}
