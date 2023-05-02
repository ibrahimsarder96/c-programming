#include<stdio.h>
int main()
{
    double x = 10.55;
    double * ptr = &x;
    *ptr=100.55;
    double * ptr2 = ptr;
    *ptr2=200.55;
    printf("x er address - %p\n", &x);
    printf("x er value - %0.2lf\n", x);
    printf("x er address - %p\n", ptr);
    printf("x er address - %p\n", ptr2);
    printf("x er size - %d\n", sizeof(ptr2));
    return 0;
}