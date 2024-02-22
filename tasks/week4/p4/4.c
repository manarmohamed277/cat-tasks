#include <stdio.h>
int fun(int arr[],int n){
     for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j])
         return arr[i];
//if there is more than one repeated number this will return with the first repeated number
     }
}}
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
 printf("the repeated number is %d",fun(arr,n));
    return 0;
}