#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
char* swap (int size,char string1[], char string2[]){
	int i,j;
	char* block1=(char*)string1;
	char* block2=(char*)string2;
		for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(block1[i]==block2[j]) block2[j]='0';
		}
	}
	return block2;
}


int main() {
	setlocale(LC_ALL,"rus");
	int size,i,j;
	printf("������� ������ ����� \n");
	scanf("%d",&size);
	char string1[size];
	char string2[size];
	printf("������� 1 ������ \n");
	scanf("%s",string1);
	printf("������� 2 ������ \n");
	scanf("%s",string2);
	
	printf("������ 1: %s\n",string1);
	printf("������ 2: %s\n",string2);
	printf("����������� ������: %s\n",swap(size,string1,string2));
	return 0;
}
