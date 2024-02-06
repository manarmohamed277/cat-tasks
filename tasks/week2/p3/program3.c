#include <stdio.h>
int main() {
    int id, sal;
    printf("enter your id\n");
    scanf("%d",&id);
    switch (id){
        case 1234:
        printf("welcome Harry");
        break;
        case 5678:
        printf("welcome Ron");
        break;
        case 1145:
        printf("welcome Hermione");
        break;
        default:
        printf("wrong id"); break;
    }
    return 0;
}