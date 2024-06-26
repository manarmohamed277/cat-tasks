#include <stdio.h>

int main(void) {
    char f;
    int n,c,sum=0;
    do{
    printf("Enter any number to find sum of its digits: \n");
    scanf("%d",&n);
    while(n){
        c=n%10;
        sum+=c;
        n/=10;
    }
    printf("sum of digits = %d\n",sum);
sum=0;
    printf("enter Y to proceed,to finish press any other key: ");
        while (getchar() != '\n');
        f = getchar();}
    while (f=='Y'||f=='y');

    return 0;
}
