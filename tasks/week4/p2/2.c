#include <stdio.h>
int main() {
    int n,op,temp;
    printf("enter number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of the array :\n");
    for(int i=0;i<n;i++){
        printf("enter element number %d : ",1+i);
        scanf("%d",&arr[i]);
    }
  {for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;}
            }
        }}
        printf("second largest element is %d ",arr[1]);
    return 0;
}