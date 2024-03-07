#include<stdio.h>
int main() {
 char arr[]="manar";
   for(int i=0;i<5;i++){
       arr[i]-=32;
   }
   puts(arr);
    return 0;
}