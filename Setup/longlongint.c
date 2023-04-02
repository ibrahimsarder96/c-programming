#include <stdio.h>
#include <limits.h>

int main() {
    long long int min = LLONG_MIN;
    long long int max = LLONG_MAX;
    
    printf("Minimum value of long long int: %lld\n", min);
    printf("Maximum value of long long int: %lld\n", max);
    
    return 0;
}