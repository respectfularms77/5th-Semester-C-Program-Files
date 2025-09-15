#include<stdio.h>
void main() {
    int i=-1, j=-1,k=-1, l=2, m;
    m = ((i++ && j++ && k++) || (l++));
    printf("The Values of i, j, k, l, m are: %d %d %d %d %d", i, j, k, l, m);
}