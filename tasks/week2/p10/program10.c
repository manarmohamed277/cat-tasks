#include <stdio.h>
int main() {
    int c,id;
    int pass= 277;
    printf("enter your id \n");
   scanf("%d",&id);
   if(id==1034){
       for(int i=0;i<3;i++){
   printf("enter your password: ");
   scanf("%d",&pass);
   if(pass==277){
       printf("welcome!");
       break;}
       printf("You are not registered\n");
       c++;};
  if(c==3) printf("no more tries");
   }
  else printf("wrong id");
   }
   