#include<stdio.h>
#include<stdlib.h>

struct Servitor{
	
	char id[20];
	char name[20];
	int Wage;
	int WorkHours;
	int Pay;
};
int salc(struct Servitor*);

int main(void){
	
	struct Servitor servitor;
	printf("please enter your id:");
	scanf("%s", servitor.id);
	printf("please enter your name:");
	scanf("%s", servitor.name);
	printf("please enter your Wage:");
	scanf("%d", &servitor.Wage);
	printf("please enter your WorkHours:");
	scanf("%d", &servitor.WorkHours);
	
	salc(&servitor);
	
	printf("\n\n%s�����:---------\n", servitor.name);
	printf("id:%s\n", servitor.id);
	printf("�m�W:%s\n", servitor.name);
	printf("���~:%d\n", servitor.Wage);
	printf("�u�@�ɼ�:%d\n", servitor.WorkHours);
	printf("�~��:%d\n", servitor.Pay);
}
int salc(struct Servitor *ser){
	
	(ser->Pay)=(ser->Wage)*(ser->WorkHours);
	
	return (ser->Pay);
}
