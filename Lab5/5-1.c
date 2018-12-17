#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#include<locale.h> 
#define size 3
int main() { 
setlocale(LC_ALL,"rus");
int i,j,c=0; 
int block[size][size]={1,-2,3,4,-5,6,7,-8,9}; 
for(i=0;i<1;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 
for(i=1;i<2;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 
for(i=2;i<3;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 
if(c>=size){ 
printf("Измененная матрица");
for(i=0;i<size;i++){ 
printf("\n"); 
for(j=0;j<size;j++){ 
block[i][j]=-1*block[i][j]; 
printf("%d\t",block[i][j]);
}
}
}
return 0;
}
