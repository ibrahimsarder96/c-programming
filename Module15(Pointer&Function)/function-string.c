#include<stdio.h>
#include<stdio.h>
void fun(char * a)
{
  printf("%d", strlen(a));
}
int main()
{
    char name[10] = "Ibrahim";
    fun(name);
    return 0;
}