
#include<stdio.h>
#include<string.h>

struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}
employee1;
int main(){

	strcpy(employee1.name,"john dee");
	employee1.id=12345;
	strcpy(employee1.department,"human resource");
	employee1.salary=55000.50;
	strcpy(employee1.email,"john.doe@company.com");
	
	
	printf("name is :%c\n",employee1.name);
	printf("id is :%d\n",employee1.id);
	printf("department is :%c\n",employee1.department);
	printf("salary is :%f\n",employee1.salary);
	printf("email is :%c\n",employee1.email);
	return 0;
}
