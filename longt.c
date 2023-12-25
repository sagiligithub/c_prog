#include <stdio.h>
#include <math.h>
int main() {
   float l1,l2,g1,g2,D;
   printf("Enter the values og all :");
   scanf("%f,%f,%f,%f",&l1,&l2,&g1,&g2);
   D = 3963 *(acos(( sin(l1)*sin (l2) + cos(l1)*cos(l2)) * cos ( g2-g1 ) ));

   printf("%f",D);
   return 0;
}