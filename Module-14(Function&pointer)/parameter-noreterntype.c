#include<stdio.h>
void mul(int x, int y) // void use korle return kora jabe na------
{
  int mul = x * y;
  printf("%d", mul);
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    mul(a,b);
    return 0;
}