#include <stdio.h>
#include <stdlib.h>
#define size 10
#include <locale.h>


int main() {
	setlocale(LC_ALL,"rus");
	int n,a;
	int block[size]={0,1,2,3,4,5,6,7,8,9};
	printf("Введите n<=10(Размер массива)  ");
	scanf("%d",&n);
	for(;n>size;){
		printf("Введите n<=size(10)");
		scanf("%d",&n);
	}
	if(n<=size){
		   for(a=n;a<size;a++){
		     printf("%d",block[a]);
	}
	if(a>=size){
		a=0;
		for(;a<n;a++){
			printf("%d",block[a]);
		}
	}
}
    
	return 0;

}
