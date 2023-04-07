#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, sum, sub;
    float x, y, summation, subtraction;
    scanf("%d %d", &a, &b); 
    scanf("%f %f", &x, &y);
    sum = a + b;
    sub = a - b;
    summation = x + y;
    subtraction = x - y;
    printf("%d %d\n",sum, sub);
    printf("%0.1f %0.1f", summation, subtraction);
    return 0;
}