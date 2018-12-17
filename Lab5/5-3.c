#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"rus");
	int i,j,a;
	int block[3][3]={{1,2,7},{8,0,3},{9,6,0}};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(block[i][j]==0){
				a=i;
				break;
			}
		}
	}
	printf("Первая строка с 0 элементом- %d\n",a);
	printf("Измененная матрица:\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
	    block[i][j]=block[i][j]-block[a-1][0];
	    printf("%d\t",block[i][j]);
}
}	
	
	return 0;
}
