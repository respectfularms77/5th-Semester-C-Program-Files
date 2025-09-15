#include<stdio.h>
#include<math.h>
void main() {
    int a, b, sum;
    printf("Enter the Value of a & b: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    double sqrt_a = sqrt(a);
    double sqrt_b = sqrt(b);
    double sqrt_sum = sqrt(sum);
    printf("The Square Root Values of a, b & sum is: %lf %lf %lf", sqrt_a, sqrt_b, sqrt_sum);
}