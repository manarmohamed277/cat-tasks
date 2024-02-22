#include <stdio.h>
int main() {
    int arr[5][5];
    int sumRow[5]={0};
    int sumColumn[5]={0};
    for (int i=0;i<5;i++) {
        printf("enter elements of row number %d: ",1+i);
        for(int j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
    }
        printf("\n");
    }
     for (int i=0;i<5;i++) {
        for(int j=0;j<5;j++){
            sumRow[i]+=arr[i][j];
            sumColumn[i]+=arr[j][i];}}
             printf("rows Totals= ");
            for (int i=0;i<5;i++) printf("%d ",sumRow[i]);
                printf("\nColumns Totals= ");
            for (int i=0;i<5;i++) printf("%d ",sumColumn[i]);
    return 0;
}