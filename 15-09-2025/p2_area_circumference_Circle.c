#include<stdio.h>
#include<math.h>
#define PI 3.14
void main() {
    double r;
    printf("Enter the Value of Radius: ");
    scanf("%lf", &r);
    double area = PI*pow(r,2);      //use otherwise PI*r*r;
    double circumference = 2*PI*r;
    printf("The Value of Area & Circumference are: %.2lf & %.3lf", area, circumference);
}