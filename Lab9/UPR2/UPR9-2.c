#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
typedef struct{
	char surname[15];
	char name[15];
	char mn[15];
	char addres[25];
	char group[10];
	char rate[10];
}student;
student stud[0];
int s_surname(int a1,student stud[],int n,char search[]){
	int i,k;
	switch(a1){
	case 1:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].surname,search)==0){
			k=i;
			break;
		}
	}		break;}
	case 2:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].name,search)==0){
			k=i;
			break;
		}	}		break;}
	case 3:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].mn,search)==0){
			k=i;
			break;
		}	}		break;}
	case 4:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].addres,search)==0){
			k=i;
			break;
		}	}		break;}
	case 5:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].group,search)==0){
			k=i;
			break;
		}	}		break;}
	case 6:{
		for(i=0;i<n;i++){
		if(strcmp(stud[i].rate,search)==0){
			k=i;
			break;
		}	}		break;}	
}
	return k;
}
int main() {
	system ("chcp 1251");
	system ("cls");
	setlocale(LC_ALL,"rus");
	FILE *f;
	f=fopen("f.txt", "w");
	if(f==NULL){
		printf("������ ��� �������� ����� ");
		return 1;
	}
	
	int a,n,i;
	do{
	printf("\n\n");
	printf("1) ���� ������� ��������;\n2) ���������� ��������� � ����;\n");
	printf("3) ����� �� ��������� ���������;\n4) �����;\n");
	
	do{
	printf("�������� ������ �����: ");
	scanf("%d",&a);
	}while (a!=0&&a>4);	
	switch(a){
		case 1:{
			printf("\n������� ���-�� ���������: ");
			scanf("%d",&n);
			stud[n];
			for(i=0;i<n;i++){
			printf("������� �������: ");
			fflush(stdin);
			gets(stud[i].surname);
			printf("������� ���: ");
			fflush(stdin);
			gets(stud[i].name);
			printf("������� ��������: ");
			fflush(stdin);
			gets(stud[i].mn);
			printf("������� �������� �����: ");
			fflush(stdin);
			gets(stud[i].addres);
			printf("������� ������: ");
			fflush(stdin);
			gets(stud[i].group);
			printf("������� �������: ");
			fflush(stdin);
			gets(stud[i].rate);
			printf("\n");
		}
			break;}	
		case 2:{
			for(i=0;i<n;i++){
				fprintf(f,"������� �%d",i+1);
				fprintf(f,"\n���: ");
				fprintf(f,stud[i].surname);
				fprintf(f," ");
				fprintf(f,stud[i].name);
				fprintf(f," ");
				fprintf(f,stud[i].mn);
				fprintf(f,"\n�����: ");
				fprintf(f,stud[i].addres);
				fprintf(f,"\n������: ");
				fprintf(f,stud[i].group);
				fprintf(f,"\n�������: ");
				fprintf(f,stud[i].rate);
				fprintf(f,"\n\n");
			}
			printf("��������� ������� ���������� � ����\n");
			break;}	
		case 3:{
			int a1;
			char search[20];
			printf("1)����� �� �������\n");
			printf("2)����� �� �����\n");
			printf("3)����� �� ��������\n");
			printf("4)����� �� ������\n");
			printf("5)����� �� ������\n");
			printf("6)����� �� ��������\n");
			printf("�������� �������� ��� ������: ");
			scanf("%d",&a1);
					printf("������� ������� ��������: ");
					fflush(stdin);
					gets(search);
					i=s_surname(a1,stud,n,search);
					printf("������� �������: ");
					printf("\n���: %s",stud[i].surname);
					printf(" %s",stud[i].name);
					printf(" %s\n",stud[i].mn);
					printf("�����: %s\n",stud[i].addres);
					printf("������: %s\n",stud[i].group);
					printf("�������: %s\n",stud[i].rate);
			
			break;}
		case 4: break;
		default: printf("\n������� �������� �� ������������\n\n");
	}
	
	
	
		
	
	}while(a!=4);
	fclose(f);
	return 0;
}
