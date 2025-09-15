#include <stdio.h>
#include<math.h>
void main(){
    double a,b;
    printf("Enter two numbers:");
    scanf("%lf%lf",&a,&b);
    double sum = sqrt(a)+sqrt(b);
    printf("The sqrt of two numbers : %.2lf and %.2lf \nSum of two sqrts: %.2lf \nSqrt of Sum: %.2lf",sqrt(a),sqrt(b),sum,sqrt(sum));
}