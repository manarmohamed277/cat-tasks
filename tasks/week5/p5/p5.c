#include <stdio.h>
int main() {
   int x=10 ,y=20,z=30;
   int*px=&x;
   int*py=&y;
   int*pz=&z;
   printf("x=%d  y=%d  z=%d  px=%d  py=%d  pz=%d  *px=%d  *py=%d  *pz=%d\n",x,y,z,px,py,pz,*px,*py,*pz);
   printf("swapping pointers...\n");
   pz = px;
   px = py;
   py = pz;
   printf("x=%d  y=%d  z=%d  px=%d  py=%d  pz=%d  *px=%d  *py=%d  *pz=%d",x,y,z,px,py,pz,*px,*py,*pz);
    return 0;
}