#include <stdio.h>
int main() {
  int x[3];
  for (int i=0;i<3;i++){
      printf("enter number %d:\n",i+1);
      scanf("%d",&x[i]);
  }
  printf("your numbers in reverse:\n");
  for (int i=2;i>=0;i--){
      printf("%d\n",x[i]);
  }
    return 0;
}