#include <stdio.h>
void fun(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j])
        int temp;
        temp =arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }}
}
int main() {
    int arr[]={5,9,2,7,6};
    fun(arr);
    printf("sum = \n");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}