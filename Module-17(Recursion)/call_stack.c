#include<stdio.h>
// main function teke protom a je function ke call korbe tar kaj complete kore ase porer kaj korbe r aibe sob kaj serili kore ses kora ke call-stack bole------------
void world()
{
  printf("world function start\n");
  printf("world function end\n");
}
void hello()
{
 printf("hello function start\n");
 world();
 printf("hello function end\n");
}
int main()
{
    printf("Main function start\n");
    hello();
    printf("Main function end\n");
    return 0;
}