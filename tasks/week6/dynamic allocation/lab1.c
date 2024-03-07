#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
   int*pnt=(int*)malloc(20*sizeof(int));
   printf("enter number of subjects: ");
   scanf("%d",&n);
   pnt=(int*)realloc(pnt,n*sizeof(int));
   for(int i=0;i<n;i++){
       printf("enter your mark for the subject number %d\n",i+1);
       scanf("%d",pnt+i);
   }
   for(int i=0;i<n;i++){
       printf("mark of subject %d is %d\n",1+i,*(pnt+i));
   }
   free(pnt);
    return 0;
}