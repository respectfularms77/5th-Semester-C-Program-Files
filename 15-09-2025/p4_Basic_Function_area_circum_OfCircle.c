#include<stdio.h>
#include<math.h>
#define PI 3.14
double area_circle() {
    double rad;
    printf("Enter the Radius for Area: ");
    scanf("%lf", &rad);
    return PI*pow(rad,2);
}
double circumference_circle() {
    double rad;
    printf("Enter the Radius for Circumference: ");
    scanf("%lf", &rad);
    return 2*PI*rad;
}
void main() {
    printf("Area & Circumference of Circle is: %.2lf %.3lf", area_circle(), circumference_circle());
}