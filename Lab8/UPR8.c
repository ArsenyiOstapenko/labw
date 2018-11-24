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
	printf("1) Ввод массива структур;\n2) Сортировка по фамилии;\n");
	printf("3) Поиск в массиве структур по заданному параметру;\n4) Изменение заданной структуры;\n");
	printf("5) Удаление структуры из массива;\n6) Вывод на экран массива структур;\n7) Выход.\n");
	
	do{
	printf("Выберите нужный пункт: ");
	scanf("%d",&a);
	}while (a!=0&&a>7);	

	switch(a){
		case 1:{
		printf("Введите размер структуры\n");
		scanf("%d",&n);
		bank[n];
	
		for(i=0;i<n;i++){
		printf("Введите Фамилию И.О: ");
		fflush(stdin);
		gets(bank[i].name);
		printf("Введите ID: ");
		scanf("%d",&bank[i].id);
		printf("Введите баланс: ");
		scanf("%f",&bank[i].balance);
		printf("Введите дату последнего изменения: ");
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
		printf("Структура успешно отсортирована");
		break;}
//		case 3:
		case 4:{
			do{
			
		printf("Что вы хотите изменить?\n");
		printf("1) Имя в ячейке\n2) ID ячейки\n3) Баланс ячейки\n4) Дату обновления ячейки\n5) Ячейку полностью\n6) Назад");
		printf("\nВыберите нужный пункт: ");
		scanf("%d",&choose);
		switch(choose){
			case 1:{
				int n1=0;
				printf("Введите номер ячейки ");
				scanf("%d",&n1);
				n1--;
				printf("Введите новое ФИО: ");
				fflush(stdin);
				gets(bank[n1].name);
				break;}
			case 2:{
				int i1=0;
				printf("Введите номер ячейки ");
				scanf("%d",&i1);
				i1--;
				printf("Введите новое ID: ");
				scanf("%d",&bank[i1].id);
				break;}
			case 3:{
				int i1=0;
				printf("Введите номер ячейки ");
				scanf("%d",&i1);
				i1--;
				printf("Введите новый баланс: ");
				scanf("%f",&bank[i1].balance);
				break;}
			case 4:{
				int i1=0;
				printf("Введите номер ячейки ");
				scanf("%d",&i1);
				i1--;
				printf("Введите последнюю дату обновления: ");
				fflush(stdin);
				gets(bank[i1].date);
				break;}
			case 5:{
				int i1=0;
				printf("Введите номер ячейки ");
				scanf("%d",&i1);
				i1--;
				printf("Введите новое ФИО: ");
				fflush(stdin);
				gets(bank[i1].name);
				printf("Введите новое ID: ");
				scanf("%d",&bank[i1].id);
				printf("Введите новый Баланс: ");
				scanf("%f",&bank[i1].balance);
				printf("Введите последнюю дату обновления: ");
				fflush(stdin);
				gets(bank[i1].date);
				break;}

			case 6: break;
			default: printf("Введите верное значение");
			}
		}while(choose!=0&&choose>6);
				break;}
			case 5:{
				int d;
				printf("Введите номер ячейки, которую хотите удалить: ");
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
		printf("ФИО [%d]: %s\n",i+1,bank[i].name);
		printf("ID [%d]: %d\n",i+1,bank[i].id);
		printf("Баланс [%d]: %.2f\n",i+1,bank[i].balance);
		printf("Дата последнего обновления: %s\n",bank[i].date);
		printf("\n");}
			
		break;}
		case 7: break;
		default: printf("Введите значение из допустимых\n");	
		}
	}while(a!=7);
	return 0;
}
