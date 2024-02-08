#include <stdio.h>
int main() {
    float arr[10];
    float sum,avr=0;
    printf("this program finds the summation and average of ten numbers\n");
    for(int i=1;i<=10;i++){
     printf("enter number %d : ",i);
     scanf("%f",&arr[i]);
     sum+=arr[i];}
     avr=sum/10;
     printf("summation= %f\n average= %f",sum,avr);
}