#include<stdio.h>
#include<stdlib.h>
int main() {
    int max,n;
   printf("enter number of elements: ");
   scanf("%d",&n);
   int*pnt=(int*)malloc(n*sizeof(int));
   printf("enter element number 1: ");
   scanf("%d",pnt);
   max=pnt[0]; int mini=pnt[0];
   for (int i=1;i<n;i++){
        printf("enter element number %d: ",(1+i));
       scanf("%d",pnt+i);
       if(max<*(pnt+i))
       max=*(pnt+i);
        if(mini>*(pnt+i))
       mini=*(pnt+i);
   }
   printf("max is:%d  mini is:%d",max,mini);
    return 0;
}