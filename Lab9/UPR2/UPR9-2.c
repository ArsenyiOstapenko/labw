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
		printf("Ошибка при создании файла ");
		return 1;
	}
	
	int a,n,i;
	do{
	printf("\n\n");
	printf("1) Ввод массива структур;\n2) Распечатка структуры в файл;\n");
	printf("3) Поиск по заданному параметру;\n4) Выход;\n");
	
	do{
	printf("Выберите нужный пункт: ");
	scanf("%d",&a);
	}while (a!=0&&a>4);	
	switch(a){
		case 1:{
			printf("\nВведите кол-во студентов: ");
			scanf("%d",&n);
			stud[n];
			for(i=0;i<n;i++){
			printf("Введите фамилию: ");
			fflush(stdin);
			gets(stud[i].surname);
			printf("Введите имя: ");
			fflush(stdin);
			gets(stud[i].name);
			printf("Введите отчество: ");
			fflush(stdin);
			gets(stud[i].mn);
			printf("Введите домашний адрес: ");
			fflush(stdin);
			gets(stud[i].addres);
			printf("Введите группу: ");
			fflush(stdin);
			gets(stud[i].group);
			printf("Введите рейтинг: ");
			fflush(stdin);
			gets(stud[i].rate);
			printf("\n");
		}
			break;}	
		case 2:{
			for(i=0;i<n;i++){
				fprintf(f,"Студент №%d",i+1);
				fprintf(f,"\nФИО: ");
				fprintf(f,stud[i].surname);
				fprintf(f," ");
				fprintf(f,stud[i].name);
				fprintf(f," ");
				fprintf(f,stud[i].mn);
				fprintf(f,"\nАдрес: ");
				fprintf(f,stud[i].addres);
				fprintf(f,"\nГруппа: ");
				fprintf(f,stud[i].group);
				fprintf(f,"\nРейтинг: ");
				fprintf(f,stud[i].rate);
				fprintf(f,"\n\n");
			}
			printf("Структура успешно перенесена в файл\n");
			break;}	
		case 3:{
			int a1;
			char search[20];
			printf("1)Поиск по Фамилии\n");
			printf("2)Поиск по Имени\n");
			printf("3)Поиск по Отчеству\n");
			printf("4)Поиск по Адресу\n");
			printf("5)Поиск по Группе\n");
			printf("6)Поиск по Рейтингу\n");
			printf("Выберите параметр для поиска: ");
			scanf("%d",&a1);
					printf("Введите искомый параметр: ");
					fflush(stdin);
					gets(search);
					i=s_surname(a1,stud,n,search);
					printf("Искомый студент: ");
					printf("\nФИО: %s",stud[i].surname);
					printf(" %s",stud[i].name);
					printf(" %s\n",stud[i].mn);
					printf("Адрес: %s\n",stud[i].addres);
					printf("Группа: %s\n",stud[i].group);
					printf("Рейтинг: %s\n",stud[i].rate);
			
			break;}
		case 4: break;
		default: printf("\nВведите значение из предложенных\n\n");
	}
	
	
	
		
	
	}while(a!=4);
	fclose(f);
	return 0;
}
