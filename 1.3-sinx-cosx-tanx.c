#include<stdio.h>
#include<math.h>

void main(){
    printf("Calculate Sinx, Cosx and Tanx\n\n");

    float x;

    printf("Enter the value of x: ");
    scanf("%f",&x);

    printf("sin(%.2f) = %lf\n",x,sin(x));
    printf("cos(%.2f) = %lf\n",x,cos(x));
    printf("tan(%.2f) = %lf\n",x,tan(x));
}