#include<stdio.h>
void fun(int * p)
{
  *p = 500;  // dereference
  printf("%p\n", p);  // address check
}
int main()
{
    int x = 10;
    printf("%p\n", &x); // address 
    fun(&x);
    printf("%d", x);
    return 0;
}