#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"rus");
	int a,k,i,b,d=0,f;
	char elem;
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	printf("¬ведите k-кол-во элементов массива ");
	scanf("%d",&k);
	char block [k],vivod[k];
	for(a=0;a<k;a++){
		printf("¬ведите элемент массива \n");
	scanf("%c",&elem);
	elem=getchar();
	block[a]=elem;
	}
	for(i=0;i<26;i++){
		for(b=0;b<k;b++){
			if(block[b]==alpha[i]){
			vivod[d]=block[b];
			d++;	
			}
		}
	
}
printf("Ёлементы массива в алфавитном пор€дке: \n");
for(f=0;f<k;f++){
	printf("%c",vivod[f]);
}
	return 0;
}
