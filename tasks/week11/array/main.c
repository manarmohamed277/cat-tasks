#include <stdio.h>
#include <malloc.h>
int main(void) {
    int n,even=0,odd=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int* ptr=(int*) malloc(sizeof (int)*n);
    for (int i=0;i<n;i++){
        printf("enter number %d :",1+i);
        scanf("%d",&ptr[i]);
    }
    for (int i=0;i<n;i++){
        if(ptr[i]%2==0)
            even++;
        else odd++;
    }
    printf("number of even numbers =%d\nnumber of odd numbers=%d",even,odd);
    return 0;
}
