#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char ss[255];
}strings;
strings string[15];
int main() {
	int k,i=0;
	FILE *F1;
	FILE *F2;
	F1=fopen("F1.txt", "r+w");
	F2=fopen("F2.txt", "r+w");
	if(F1==NULL||F2==NULL){
		printf("ERROR");
		return 1;
	}
	int size;
	printf("Vvedite kol-vo strok: ");
	scanf("%d",&size);
for(i=0;i<size;i++){
	printf("Vvedite stroky: ");
	fflush(stdin);
	gets(string[i].ss);
	fputs(string[i].ss,F1);
	fputs("\n",F1);
}

printf("Vvedite k: ");
scanf("%d",&k);
i=k;
k=k+5;
		for(;i<k;i++){
			fprintf(F2,string[i].ss);
			fprintf(F2,"\n");
		}
	printf("\n Successfully");
	fclose(F1);
	fclose(F2);
	return 0;
}
