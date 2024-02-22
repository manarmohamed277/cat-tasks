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
  printf("Enter 0 for ascending or Enter 1 for descending");
    scanf("%d",&op);
    if(op==0) {
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;}
            }
        }
    }
    else if(op==1){for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;}
            }
        }}
        else printf("wrong choise");
        
     for(int i=0;i<n;i++){printf("%d ",arr[i]);}
    
    return 0;
}