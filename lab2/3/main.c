#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


void main(void) {
	setlocale(LC_ALL,"Russian");
	
	int n;
	printf("������� ����� ������ n");
    scanf("%d", &n);

     if (n==1 || n==2 || n==12) printf("����");
      else if (n>=3 && n<=5) printf("�����");
       else if (n>=6 && n<=8) printf("����");
        else printf("�����");
}
