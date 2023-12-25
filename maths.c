#include <stdio.h>
int main(){
    float len,bred,rad,area,peri,area_c,circum;
    printf("enter the length of rectangle :");
    scanf("%f",&len);
    printf("enter the breadth of rectangle :");
    scanf("%f",&bred);
    printf("enter the radius of circle :");
    scanf("%f",&rad);
    float pi=3.14;
    area=len*bred;
    peri=2*(len+bred);
    area_c=pi*(rad*rad);
    circum=2*pi*rad;
    printf("the area of rectangle is %f\n",area);
    printf("the perimeter of rectangle is %f\n",peri);
    printf("the area of circle is %f\n",area_c);
    printf("the circumference of circle is %f\n",circum);
    return 0;
}

