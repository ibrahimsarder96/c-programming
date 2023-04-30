#include<stdio.h>
char sum(int x, int y)
{
  char sum = x + y;
  return sum;
}
int main()
{
    int ans = sum(10, 20);
    printf("%d", ans);
    return 0;
}