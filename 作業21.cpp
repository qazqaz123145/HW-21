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
	
	printf("\n\n%s的資料:---------\n", servitor.name);
	printf("id:%s\n", servitor.id);
	printf("姓名:%s\n", servitor.name);
	printf("實薪:%d\n", servitor.Wage);
	printf("工作時數:%d\n", servitor.WorkHours);
	printf("薪水:%d\n", servitor.Pay);
}
int salc(struct Servitor *ser){
	
	(ser->Pay)=(ser->Wage)*(ser->WorkHours);
	
	return (ser->Pay);
}
