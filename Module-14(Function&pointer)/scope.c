#include<stdio.h>
//global scope--------------
int x = 50;
void global(void)
  {
    printf("print x memory address - %p\n", &x); // address check korte %p,&variableName
  }
int main()
{
     printf("Main print x memory address - %p\n", &x);
     global();
     // Block scope---------
     for(int i = 0; i < 5; i++)
     {
      int a = 100;
     }
     int a = 200;
     printf("%d", a);
    return 0;
}