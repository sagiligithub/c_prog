#include <stdio.h>
int main(){
    float mat,c,os,crypto,ss;
    float total =500;
    printf("enter the marks in mat:");
    scanf("%f",&mat);
   printf("enter the marks in c:");
    scanf("%f",&c);
    printf("enter the marks in os:");
    scanf("%f",&os);
    printf("enter the marks in cryto:");
    scanf("%f",&crypto);
    printf("enter the marks in ss:");
    scanf("%f",&ss); 
    float agg_sum=(mat)+(c)+(os)+(crypto)+(ss);
    printf("agg_sum :%f\n",agg_sum);
    float percentage;
    percentage=((agg_sum)/(total)*100);
    printf("percentage is :%f\n",percentage);
    return 0;

}