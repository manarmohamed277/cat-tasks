#include <stdio.h>
int main(void) {
    int y,a=1;
    char n;
    while (a--){
   printf("enter the year:\n");
   scanf("%d",&y);
   if((y%4==0&&y%100!=0)||y==400){
       printf("this is a leap year\n");
   } else
       printf("this is not a leap year\n");
   printf("enter Y to proceed,to finish press any other key: ");
        while (getchar() != '\n');
        n = getchar();
   if(n=='Y'||n=='y')
       a=1;}
    return 0;
}
