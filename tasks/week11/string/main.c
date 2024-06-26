#include <stdio.h>

int main(void) {
    char str[]="manar";
    char copy[6] ;
    int i;
    for(i=0;str[i]!='\0';i++){
        copy[i]=str[i];
    }
    copy[i]='\0';
        printf("%s",copy);

    return 0;
}
