#include<stdio.h>
#include<string.h>
int main() {
    int digit=0,alpha=0,temp,special=0;
 printf("enter the string: ");
     while((temp=getchar())!='\n'){
         if(temp >='0'&&temp<='9')
      digit++;
      else if(temp>='A'&&temp<='Z'||temp>='a'&&temp<='z')
      alpha++;
      else special++;}
      printf("digits= %d , alphabets= %d , special characters= %d",digit,alpha,special);
    return 0;
}