#include<stdio.h>
#include<string.h>
int main() {
    char arr[100];
 printf("enter the string: ");
     gets(arr);
     char rev[strlen(arr)+1];
     for(int i=0;i<strlen(arr);i++){
         rev[i]=arr[strlen(arr)-i-1];
     }
     rev[strlen(arr)+1]='\0';
     puts(rev);
    return 0;
}