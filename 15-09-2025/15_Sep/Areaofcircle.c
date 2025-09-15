#include <stdio.h>
#include<math.h>
#define PI 3.14
void main(){
    double rad;
    printf("Enter the radius of circle:");
    scanf("%lf",&rad);
    double area=PI*pow(rad,2);
    printf("Area of Circle: %.2lf sq units",area);
    double circumference=2*PI*rad;
    printf("\nCircumference of Circle: %.3lf units",circumference);
}