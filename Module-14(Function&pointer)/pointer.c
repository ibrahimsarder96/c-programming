#include<stdio.h>
int main()
{
    int x = 100;
    printf("%p\n", &x);
    int * p = &x; // pointer a value er address store kora
    printf("%p\n", p);
    // dereference---------
    printf("%d", *p);
    *p=500; // address value change kora-------
    return 0;
}