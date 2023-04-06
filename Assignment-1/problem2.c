#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long int A;
    long long int B;
    long long int mul;
    scanf("%lld %lld", &A, &B);
    mul = A * B;
    printf("%lld", mul);
    return 0;
}