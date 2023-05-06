#include<stdio.h>
void fun(int a)
{
    if(a==6) return; //Base case recursive function stop korar jonno use korte hoy
    printf("%d\n", a);
    fun(a + 1);
}
int main()
{
    fun(1);
    return 0;
}