#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct{
	char name[20];
	int id;
	float balance;
	char date[11];	
}client_bank;

client_bank bank[0];
client_bank t;	
int main() {
	system ("chcp 1251");
	system ("cls");
	setlocale(LC_ALL,"rus");
	int a,n=0,i=0;
	int choose=0;
	
	do{
	printf("\n\n");
	printf("1) ���� ������� ��������;\n2) ���������� �� �������;\n");
	printf("3) ����� � ������� �������� �� ��������� ���������;\n4) ��������� �������� ���������;\n");
	printf("5) �������� ��������� �� �������;\n6) ����� �� ����� ������� ��������;\n7) �����.\n");
	
	do{
	printf("�������� ������ �����: ");
	scanf("%d",&a);
	}while (a!=0&&a>7);	

	switch(a){
		case 1:{
		printf("������� ������ ���������\n");
		scanf("%d",&n);
		bank[n];
	
		for(i=0;i<n;i++){
		printf("������� ������� �.�: ");
		fflush(stdin);
		gets(bank[i].name);
		printf("������� ID: ");
		scanf("%d",&bank[i].id);
		printf("������� ������: ");
		scanf("%f",&bank[i].balance);
		printf("������� ���� ���������� ���������: ");
		fflush(stdin);
		gets(bank[i].date);
			}	
		break;}
		case 2:{
			int j;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(strcmp(bank[i].name,bank[j].name)>0){
					t=bank[i];
					bank[i]=bank[j];
					bank[j]=t;
				}
			};
		};   
		printf("��������� ������� �������������");
		break;}
//		case 3:
		case 4:{
			do{
			
		printf("��� �� ������ ��������?\n");
		printf("1) ��� � ������\n2) ID ������\n3) ������ ������\n4) ���� ���������� ������\n5) ������ ���������\n6) �����");
		printf("\n�������� ������ �����: ");
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				int n1=0;
				printf("������� ����� ������ ");
				scanf("%d",&n1);
				n1--;
				printf("������� ����� ���: ");
				fflush(stdin);
				gets(bank[n1].name);
				break;}
			case 2:{
				int i1=0;
				printf("������� ����� ������ ");
				scanf("%d",&i1);
				i1--;
				printf("������� ����� ID: ");
				scanf("%d",&bank[i1].id);
				break;}
			case 3:{
				int i1=0;
				printf("������� ����� ������ ");
				scanf("%d",&i1);
				i1--;
				printf("������� ����� ������: ");
				scanf("%f",&bank[i1].balance);
				break;}
			case 4:{
				int i1=0;
				printf("������� ����� ������ ");
				scanf("%d",&i1);
				i1--;
				printf("������� ��������� ���� ����������: ");
				fflush(stdin);
				gets(bank[i1].date);
				break;}
			case 5:{
				int i1=0;
				printf("������� ����� ������ ");
				scanf("%d",&i1);
				i1--;
				printf("������� ����� ���: ");
				fflush(stdin);
				gets(bank[i1].name);
				printf("������� ����� ID: ");
				scanf("%d",&bank[i1].id);
				printf("������� ����� ������: ");
				scanf("%f",&bank[i1].balance);
				printf("������� ��������� ���� ����������: ");
				fflush(stdin);
				gets(bank[i1].date);
				break;}

			case 6: break;
			default: printf("������� ������ ��������");
			}
		}while(choose!=0&&choose>6);
				break;}
			case 5:{
				int d;
				printf("������� ����� ������, ������� ������ �������: ");
				scanf("%d",&d);
				d--;
				for(i=0;i<n;i++){
					if(i>=d){
						bank[i]=bank[i+1];
					}
			
			}
			n--;
				break;}
		case 6:{
			printf("\n");
		for(i=0;i<n;i++){
		printf("��� [%d]: %s\n",i+1,bank[i].name);
		printf("ID [%d]: %d\n",i+1,bank[i].id);
		printf("������ [%d]: %.2f\n",i+1,bank[i].balance);
		printf("���� ���������� ����������: %s\n",bank[i].date);
		printf("\n");}
			
		break;}
		case 7: break;
		default: printf("������� �������� �� ����������\n");	
		}
	}while(a!=7);
	return 0;
}
