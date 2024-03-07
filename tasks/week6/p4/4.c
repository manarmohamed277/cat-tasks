#include<stdio.h>
#include<string.h>
int main() {
    char arr[100],c;
 printf("enter the string: ");
     gets(arr);
     printf("enter character to search:");
     scanf("%c",&c);
     for(int i=0;i<strlen(arr);i++){
        if(arr[i]==c){
            printf(" %c is found at index %d",arr[i],i);
        }
     }
    return 0;
}