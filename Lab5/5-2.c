#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"rus");
	int i,j,zero,copy1,copy2,copy3;
	zero=0;
	copy3=0;
	copy2=0;
	copy1=0;
	int block[3][4]={{1,1,3,0},{4,0,5,2},{3,3,3,2}};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(block[i][j]==0){
				zero++;
			}
		}
	}
		for(j=0;j<4;j++){
			if(block[0][j]==block[0][j+1]){
				copy1++;
			}
		}
		for(j=0;j<4;j++){
			if(block[1][j]==block[1][j+1]){
				copy2++;
			}
		}
		for(j=0;j<4;j++){
			if(block[2][j]==block[2][j+1]){
				copy3++;
			}
		}
	printf("Кол-во строк с 0 элементами- %d\n",zero);
	if(copy1>copy2&copy1>copy3)printf("Наибольшее число повторений в 1 строке");
	else if(copy2>copy3) printf("Наибольшее число повторений во 2 строке");
	else printf("Наибольшее число повторений в 3 строке");
	
	return 0;
}
