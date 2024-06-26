#include <stdio.h>
#include <malloc.h>
int* fmax(int*ptr){
    int *arr=(int*)malloc(sizeof (int)*2);
    arr[0]=ptr[0];
    arr[1]=ptr[0];
    for(int i=0;i<4;i++){
        if(ptr[i]>arr[0])
            arr[0]=ptr[i];
        else if(ptr[i]<arr[1])
            arr[1]=ptr[i];
    }
    return arr;
}
int main(void) {
    int arr[4];
    for (int i=0;i<4;i++){
        printf("enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int *res= fmax(arr);
    printf("max number is %d\nminimum number is %d",res[0],res[1]);
    return 0;
}
