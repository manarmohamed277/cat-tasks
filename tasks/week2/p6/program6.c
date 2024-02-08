#include <stdio.h>
int main() {
    int res;
    printf("enter result of 3*4\n");
q:  scanf("%d",&res);
   if (res==12)
       printf ("Thanks\n");
       else{
           printf("Try again\n");
           goto q;
       }
}