#include <stdio.h>
void fmax(int*ptr){
    int max=ptr[0];
    int min=ptr[0];
    for(int i=0;i<4;i++){
        if(ptr[i]>max)
            max=ptr[i];
        else if(ptr[i]<min)
            min=ptr[i];
    }
    printf("max number is %d\nminimum number is %d",max,min);
}
int main(void) {
    int arr[4];
 for (int i=0;i<4;i++){
     printf("enter number %d : ",i+1);
     scanf("%d",&arr[i]);
 }
    fmax(arr);
    return 0;
}
