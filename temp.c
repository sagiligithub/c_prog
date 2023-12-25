#include <stdio.h>
int main(){
    float far,cent;
    printf("enter the temperature in Fahrenheit degrees :");
    scanf("%f",&far);
    cent= (far-32)*5/9;
    printf("in Centigrade degrees.:%f\n",cent);
    return 0;
}