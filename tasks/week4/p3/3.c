#include <stdio.h>
int main() {
    int n;
    printf("enter number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    for (int i=0;i<n;i++) temp[i]=0;
    printf("enter elements of the array :");
    for(int i=0;i<n;i++){
        printf("\nenter element number %d : ",1+i);
        scanf("%d",&arr[i]);
    }
 for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j])
         temp[j]++;
     }
 }
 for(int i=0;i<n;i++){
     if(temp[i]==0)
     printf("%d ",arr[i]);
 }
    return 0;
}