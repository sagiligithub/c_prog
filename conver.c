#include <stdio.h>
int main(){
   float km,meter,feet ,inches,cent_met;
   printf("enter the distance between two cities (in km) :");
   scanf("%f",&km);
   meter=(1.0/1000) * (km);
   feet =(1.0/3280.84) * (km);
   inches=(1.0/39370.1 ) *(km);
   cent_met=(1.0/100000) *(km);
   
   printf("in meters :%.2f\n",meter);
   printf("in feet :%.2f\n",feet);
   printf("in inches :%.2f\n",inches);
   printf("in centimeters :%.2f\n",cent_met);
   return 0;
    
}