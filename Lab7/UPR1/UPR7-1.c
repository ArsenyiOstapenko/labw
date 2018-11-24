#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int search(int m, int n, int **block){
	int i,j,c,numb=0;
	int *p_block=(int*)block;
	c=0;
	for(i=0;i<m;i++){
		c=0;
		for(j=0;j<n;j++){
			if(p_block[i*m+j]==0) c++;
			if(c==m){
				numb=i;
				break;
			}
		}
	}
	return numb;
}

int main() {
	setlocale(LC_ALL,"rus");
	int m,n,i,j,numb,c;
	printf("Введите m  n\n");
	scanf("%d %d",&m,&n);
	int* block [m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Введите элемент массива [%d][%d]\n",i,j);
			scanf("%d",&block[i][j]);
		}
	}
	

	printf("Номер нулевой строки\n%d",search(m,n,(int**)block));
	return 0;
}
