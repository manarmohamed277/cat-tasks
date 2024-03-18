#include<stdio.h>
typedef struct {
	int salary;
	int bonus;
    int deductions;
}E;
int main(){
	E mohsen,maged,mariam;

	printf("enter salary,bonus and deductions for the employee Mohsen: ");
	scanf("%d %d %d",&mohsen.salary,&mohsen.bonus,&mohsen.deductions);
	printf("\nenter salary,bonus and deductions for the employee Maged : ");
	scanf("%d %d %d",&maged.salary,&maged.bonus,&maged.deductions);
	printf("\nenter salary,bonus and deductions for the employee Mariam:" );
	scanf("%d %d %d",&mariam.salary,&mariam.bonus,&mariam.deductions);
	printf("for employee Mohsen: \n");
	printf("salary: %d\n bonus: %d\n deduction: %d \n",mohsen.salary, mohsen.bonus,mohsen.deductions);
	printf("for employee Maged: \n");
	printf("salary: %d\n bonus: %d\n deduction: %d \n",maged.salary,maged.bonus,maged.deductions);
	printf("for employee Mariam: \n");
	printf("salary: %d\n bonus: %d\n deduction: %d \n",mariam.salary,mariam.bonus,mariam.deductions);
    return 0;
}
