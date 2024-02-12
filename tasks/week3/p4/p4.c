#include <stdio.h>
void login(int p){
 static int c=2,n;
    if(p==27707) printf("Welcome!");
    else{
printf("wrong password,You have %d tries\nenter your password:",c);
         scanf("%d",&n); 
    c--;
    if(c==0){ printf("no more tries"); return;} 
    login(n);
    } }
int main() {
    int p;
   printf("enter your password: ");
    scanf("%d",&p);
    login(p);
    return 0;
}
