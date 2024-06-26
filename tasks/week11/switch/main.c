#include <stdio.h>
int main(void) {
    float n1,n2;
    char op,n;
    do{
    printf("Enter an operator between (+,-,*,/):");
    scanf(" %c",&op);
    printf("Enter two operands:");
    scanf("%f %f",&n1,&n2);
    switch (op) {
        case '+':
            printf("%f + %f = %f\n",n1,n2,n1+n2);
            break;
        case '*':
            printf("%f * %f = %f\n",n1,n2,n1*n2);
            break;
        case '-':
            printf("%f - %f = %f\n",n1,n2,n1-n2);
            break;
        case '/':
            if(n2==0){
                printf("Division by zero is not allowed.\n");
                break;}
            else
            printf("%f / %f = %f\n",n1,n2,n1/n2);
            break;
        default:
            printf("wrong choice,try again\n");
    }
        printf("enter Y to proceed,to finish press any other key: ");
        while (getchar() != '\n');
        n = getchar();}
    while (n=='Y'||n=='y');


    return 0;
}
