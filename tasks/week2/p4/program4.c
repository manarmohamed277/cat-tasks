#include <stdio.h>
int main() {
    int g;
q:    printf("enter your grade in percentage\n");
    scanf("%d",&g);
   if (g>100){
       printf ("wrong percentage try again\n");
       goto q;
   }
   if(g>=85)
   printf("exellent");
   else if (g>=75&&g<80)
    printf("very good");
    else if (g>=60&&g<75)
     printf("good");
     else if(g>=50&&g<60)
     printf("Acceptable");
     else 
     printf("fail");
    return 0;
}