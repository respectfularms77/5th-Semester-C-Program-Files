#include <stdio.h>
#include<math.h>
#define PI 3.14
/*Function Prototype*/
double area(void);
double circumference(void);
void main(){
    double rad;
    printf("Area of Circle: %.2lf sq units",area());
    printf("\nCircumference of Circle: %.3lf units",circumference());
}
double area(){
    double rad=10;
    return PI*pow(rad,2);
}
double circumference(){
    double rad=10;
    return 2*PI*rad;
}
