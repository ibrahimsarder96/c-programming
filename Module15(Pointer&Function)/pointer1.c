#include<stdio.h>
int main()
{
    int x = 10;
    int * ptr = &x;
    *ptr=100;
    int * ptr2 = ptr;
    *ptr2=200;
    printf("x er address - %p\n", &x);
    printf("x er value - %d\n", x);
    printf("x er address - %p\n", ptr);
    printf("x er address - %p\n", ptr2);
    printf("x er size - %d\n", sizeof(ptr2));
    return 0;
}