#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"rus");
int i=0,n,Nmax=0,absmax=0,comp=1,c,a=0;
printf("Введите кол-во элементов ");
scanf("%d",&n);
printf("Введите C ");
scanf("%d",&c);
int* block=(int*)malloc(n*sizeof(*block));
do{
	printf("\n Введите элемент массива ");
	scanf("%d",&block[i]);
	i++;
}while(i<n);
for(i=0;i<n;i++){
	if(abs(block[i])>absmax) {
		a=i;
		absmax=abs(block[i]);
    }
}
for(a=+1;a<n;a++){
	comp*=block[a];
}
for(i=0;i<n;i++){
	if(block[i]>c) Nmax++;
}
printf("\n Кол-во элементов>C %d\n",Nmax);
printf("\n Произведение элементов, расположенных после  максимального по модулю элемента= %d",comp);
	free(block);
	return 0;
}
