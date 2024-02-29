// Online C compiler to run C program online
#include <stdio.h>
int * fun(int arr1[],int arr2[],int sum[]){
    for(int i=0;i<6;i++){
        sum[i]=arr1[i]*arr2[i];
    }
    return sum;
}
int main() {
    int arr1[]={2,3,5,7,3,6};
    int arr2[]={4,6,3,7,4,8};
    int sum[6];
    printf("sum = \n");
    for (int i=0;i<6;i++){
        printf("%d ",fun(arr1,arr2,sum)[i]);
    }
    return 0;
}